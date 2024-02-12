#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL2/SDL.h>

class Graphics {
public:
    Graphics(const char* title, int width, int height);
    ~Graphics();

    void clear();
    void present();
    void drawPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
    void drawLine(int x1, int y1, int x2, int y2, Uint8 red, Uint8 green, Uint8 blue);
    void drawRectangle(int x, int y, int width, int height, Uint8 red, Uint8 green, Uint8 blue);
    void drawCircle(int centerX, int centerY, int radius, Uint8 red, Uint8 green, Uint8 blue);

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
};

#endif // GRAPHICS_H
