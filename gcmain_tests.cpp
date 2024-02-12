// Questo file serve a testare la libreria

#include <iostream>
#include <cmath>

#include "src/algebra.h"
#include "src/output.h"
#include "src/graphics.h"


void drawRotatingCube(Graphics& graphics, double angle) {
    int centerX = 150;
    int centerY = 150;
    int size = 100;

    // Clear the screen
    graphics.clear();

    // Draw a rotating cube
    for (int i = 0; i < 4; ++i) {
        int x1 = centerX + static_cast<int>(size * cos(angle * M_PI / 180));
        int y1 = centerY + static_cast<int>(size * sin(angle * M_PI / 180));

        int x2 = centerX + static_cast<int>(size * cos((angle + 90) * M_PI / 180));
        int y2 = centerY + static_cast<int>(size * sin((angle + 90) * M_PI / 180));

        graphics.drawLine(centerX, centerY, x1, y1, 0, 0, 0); // Draw lines of the cube
        graphics.drawLine(x1, y1, x2, y2, 0, 0, 0);

        angle += 90; // Rotate for the next line
    }

    // Present the drawn cube
    graphics.present();
}

int main() {
    Graphics graphics("Spinning Cube", 300, 300); // Assuming your window size is 300x300 pixels

    double angle = 0.0;

    while (true) {
        drawRotatingCube(graphics, angle);

        // Update the rotation angle for the next frame
        angle += 2.0; // You can adjust the speed of rotation here

        // Add a delay to control the rotation speed
        SDL_Delay(16); // ~60 frames per second
    }

    return 0;
}
