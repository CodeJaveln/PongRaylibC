#ifndef TYPES_H
#define TYPES_H

#define PLAYER_HEIGHT 80
#define PLAYER_WIDTH 10

#define BALL_SIZE 10
#define BALL_SPEED 150.0f


#include "raylib/raylib.h"

typedef struct {
    Vector2 position;
    float velocity;
} Player;

typedef struct {
    Vector2 position;
    Vector2 velocity;
} Ball;

typedef struct {
    Player player1;
    Player player2;
    Ball ball;
} GameState;

#endif
