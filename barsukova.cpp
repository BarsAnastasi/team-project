#include "barsukova.h"

#define COEFF 1.609344	// коэффициент для перевода 

// Перевод из мили/ч в км/ч
double mphToKmh(double v) {
	return v * COEFF;
}

// Перевод из км/ч в мили/ч
double kmhToMph(double v) {
	return v / COEFF;
}