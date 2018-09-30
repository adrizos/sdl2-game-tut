#include "Game.hpp"

Game::Game(){

}

Game::~Game() {

}

void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen) {
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0){
        std::cout << "Subsystems Initialized..." << std:endl;

        window = SDL_CreateWindow()
    }
}

void Game::handleEvents() {

}

void Game::update() {

}

void Game::render() {

}

void Game::clean() {

}