// output.cpp

#include "output.h"

void dprintf(const char* format, ...) {
    va_list args;
    va_start(args, format);
    std::printf("DEBUG: ");
    std::vprintf(format, args);
    std::printf("\n");
    va_end(args);
}
void oprintf(const char* format, ...) {
    va_list args;
    va_start(args, format);
    std::printf("OUTPUT: ");
    std::vprintf(format, args);
    std::printf("\n");
    va_end(args);
}
void eprintf(const char* format, ...) {
    va_list args;
    va_start(args, format);
    std::fprintf(stderr, "ERROR: ");
    std::vfprintf(stderr, format, args);
    std::fprintf(stderr, "\n");
    va_end(args);
}
