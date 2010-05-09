// For License and Copyright information, see main.cpp

#include "game.h"

namespace Stage{
	void Game::initialize() {
		SDL_Init(SDL_INIT_EVERYTHING);
		int SCREEN_WIDTH = 1280;
		int SCREEN_HEIGHT = 720;
		int SCREEN_BPP = 32;
		SDL_Surface *screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_OPENGL );
	
		SDL_WM_SetCaption ("Project Yuki", NULL);
		SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
		SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);
	
		SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
		SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
		SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
		SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);

	}
	Game::Game(EntryPoint& userEntryPoint) {
		initialize();
	}
}