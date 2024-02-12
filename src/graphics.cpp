#include "graphics.h"

Graphics::Graphics(const char* title, int width, int height) {
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

Graphics::~Graphics() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Graphics::clear() {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);
}

void Graphics::present() {
    SDL_RenderPresent(renderer);
}

void Graphics::drawPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue) {
    SDL_SetRenderDrawColor(renderer, red, green, blue, 255);
    SDL_RenderDrawPoint(renderer, x, y);
}

void Graphics::drawLine(int x1, int y1, int x2, int y2, Uint8 red, Uint8 green, Uint8 blue) {
    SDL_SetRenderDrawColor(renderer, red, green, blue, 255);
    SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
}

void Graphics::drawRectangle(int x, int y, int width, int height, Uint8 red, Uint8 green, Uint8 blue) {
    SDL_Rect rect = { x, y, width, height };
    SDL_SetRenderDrawColor(renderer, red, green, blue, 255);
    SDL_RenderDrawRect(renderer, &rect);
}

void Graphics::drawCircle(int centerX, int centerY, int radius, Uint8 red, Uint8 green, Uint8 blue) {
    SDL_SetRenderDrawColor(renderer, red, green, blue, 255);

    for (int i = 0; i < 360; ++i) {
        double angle = i * 3.14159265358979323846 / 180;
        int x = static_cast<int>(centerX + radius * cos(angle));
        int y = static_cast<int>(centerY + radius * sin(angle));
        SDL_RenderDrawPoint(renderer, x, y);
    }
}
