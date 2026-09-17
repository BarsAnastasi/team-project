#include "barsukova.h"
#include <iostream>

#define COEFF 1.609344	// коэффициент для перевода 

// Перевод из мили/ч в км/ч
double mphToKmh(double v) {
	return v * COEFF;
}

// Перевод из км/ч в мили/ч
double kmhToMph(double v) {
	return v / COEFF;
}

// Ввод скорости и проверка
double inputV()
{
	double v;
	do {
		std::cout << "Введите скорость: ";
		std::cin >> v;
		if (v < 0)
			std::cout << "Ошибка! Скорость должна быть неотрицательной. \n";
	} while (v < 0);
	return v;
}