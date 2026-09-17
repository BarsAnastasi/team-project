#include "barsukova.h"

#define COEFF 1.609344	// коэффициент для перевода 

double mphToKmh(double v) {
	return v * COEFF;
}


double kmhToMph(double v) {
	return v / COEFF;
}