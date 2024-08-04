#include <raylib.h>

typedef struct Ball
{
  Vector2 pos;
  Vector2 vel;
} Ball;

int main() {
    InitWindow(1280, 720, "CPP - Raylib5 Template");
    SetTargetFPS(144);

    Ball ball = {
        .pos{(float) 1280 / 2, (float) 720 / 2},
        .vel{10, 10}};

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawFPS(10, 10);

        if (ball.pos.x < 0 || ball.pos.x > 1280)
        {
            ball.vel.x *= -1;
        }
        else if (ball.pos.y < 0 || ball.pos.y > 720)
        {
            ball.vel.y *= -1;
        }

        ball.pos.x += ball.vel.x;
        ball.pos.y += ball.vel.y;

        DrawCircleV(ball.pos, 10, RAYWHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
