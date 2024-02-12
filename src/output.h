#ifndef OUTPUT_H
#define OUTPUT_H

#include <iostream>
#include <cstdio>
#include <cstdarg>

// Funzione per stampare un messaggio di debug
void dprintf(const char* format, ...);

// Funzione per stampare un messaggio di errore
void eprintf(const char* format, ...);

// Funzione per stampare un messaggio di output
void oprintf(const char* format, ...);

#endif // OUTPUT_H
