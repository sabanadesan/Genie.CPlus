#include <stdio.h>
#include <sdl.h>

int main(int argc, char** argv)
{
	SDL_Window* mWindow;

	int sdlResult = SDL_Init(SDL_INIT_VIDEO);
	
	if (sdlResult != 0)
	{
		SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
		return false;
	}
	
	mWindow = SDL_CreateWindow(
		"Game Programming in C++ (Chapter 1)", // Window title
		100,   // Top left x-coordinate of window
		100,   // Top left y-coordinate of window
		1024,  // Width of window
		768,   // Height of window
		0      // Flags (0 for no flags set)
	);
	
	if (!mWindow)
	{
		SDL_Log("Failed to create window: %s", SDL_GetError());
		return false;
	}

	SDL_Renderer* renderer = SDL_CreateRenderer(mWindow, -1, 0);

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);

	SDL_Delay(3000);

	return 0;
}