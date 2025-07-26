# Defines name of program
TARGET := pong

CC := gcc

C_SRC := $(shell find src -name '*.c')
OBJ := $(patsubst src/%.c,build/%.o,$(C_SRC))

DEBUGFLAGS := -DDEBUG -g -O0
CFLAGS := -Wall -Werror -Iinclude -std=c99 -MMD -MP $(DEBUGFLAGS)
LDFLAGS := -Llibraries -lraylib -lm -lpthread -ldl -lrt -lGL

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $^ $(LDFLAGS) -o $@

build/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(OBJ:.o=.d)

run: all
ifeq ($(OS),Windows_NT)
	$(TARGET).exe
else
	./$(TARGET)
endif

clean:
ifeq ($(OS),Windows_NT)
	del /Q /S build >nul 2>&1
	del $(TARGET).exe >nul 2>&1
else
	rm -rf build $(TARGET)
endif
