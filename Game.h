#pragma once

#include <stdio.h>
#include <sdl.h>

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

	SDL_Window* mWindow;
	bool mIsRunning;
};