// Questo file serve a testare la libreria

#include <iostream>

#include "algebra.h"

#include "algebra.h"
#include "output.h"

int main() {
    try {
        // Esempio di utilizzo delle operazioni algebriche
        double numero = 4;
        double risultato = radiceQuadrata(numero);
        oprintf("La radice quadrata di %f è %f", numero, risultato);

    } catch (...) {
        eprintf("Eccezione generale catturata.");
    }

    return 0;
}
