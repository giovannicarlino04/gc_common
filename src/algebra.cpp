// algebra.cpp

#include "algebra.h"
#include <cmath>

double somma(double a, double b) {
    return a + b;
}

double sottrazione(double a, double b) {
    return a - b;
}

double moltiplicazione(double a, double b) {
    return a * b;
}

double divisione(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        // Gestione dell'errore: divisione per zero
        return NAN; // O un altro valore appropriato per il tuo caso
    }
}

double potenza(double base, double esponente) {
    return pow(base, esponente);
}

double radiceQuadrata(double numero) {
    return sqrt(numero);
}

double logaritmo(double base, double argomento) {
    return log(argomento) / log(base);
}

unsigned long long fattoriale(int n) {
    if (n < 0) {
        // Gestione dell'errore: fattoriale di un numero negativo
        return 0; // O un altro valore appropriato per il tuo caso
    }

    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
