# Defines name of program
TARGET := pong

CC := gcc

C_SRC := $(shell find src -name '*.c')
OBJ := $(patsubst src/%.c,build/%.o,$(C_SRC))

DEBUGFLAGS := -DDEBUG -g -O0
CFLAGS := -Wall -Werror -Iinclude -std=c99 -MMD -MP $(DEBUGFLAGS)

ifeq ($(OS),Windows_NT)
	LDFLAGS := -Llibraries/win64 -lraylib -lopengl32 -lgdi32 -lwinmm 
else
	LDFLAGS := -Llibraries/linux64 -lraylib -lm -ldl -lpthread -lGL -lrt -lX11
endif

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $^ $(LDFLAGS) -o $@

build/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(OBJ:.o=.d)

run: all
ifeq ($(OS),Windows_NT)
	./$(TARGET).exe
else
	./$(TARGET)
endif

clean:
	rm -rf build $(TARGET)
