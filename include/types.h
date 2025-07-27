#ifndef TYPES_H
#define TYPES_H

#include "raylib/raymath.h"

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
