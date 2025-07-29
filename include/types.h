#ifndef TYPES_H
#define TYPES_H

#define PLAYER_HEIGHT 80
#define PLAYER_WIDTH 10
#define PLAYER_OFFSET 0.036f

#define BALL_SIZE 10
#define BALL_SPEED 150.0f

#define SCREEN_HEIGHT 600
#define SCREEN_WIDTH 800

#include "raylib/raylib.h"

typedef struct {
    Vector2 position;
    float velocity;
    int score;
} Player;

typedef struct {
    Vector2 position;
    Vector2 velocity;
} Ball;

#define TIME_PAUSED 0.5f

typedef struct {
   float time;
   bool active; 
} Timer;

typedef struct {
    Player player1;
    Player player2;
    Ball ball;
    Timer timer;
} GameState;

#endif
