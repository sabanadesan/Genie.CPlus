#pragma once

#include <stdio.h>
#include <sdl.h>

struct Vector2 {
	float x;
	float y;
};

class Game {
public:
	Game();
	bool Initialize();
	void RunLoop();
	void Shutdown();
private:
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	SDL_Renderer* mRenderer;
	SDL_Window* mWindow;
	bool mIsRunning;
	Uint32 mTicksCount;

	int mPaddleDir;
	Vector2 mPaddlePos;
	Vector2 mBallPos;
	Vector2 mBallVel;
};