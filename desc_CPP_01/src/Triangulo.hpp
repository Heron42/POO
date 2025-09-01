#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include "Ponto.hpp"

class Triangulo {
	Ponto a, b, c;

public:
	Triangulo(double xa, double ya, double xb, double yb, double xc, double yc);

	double perimetro() const;
};

#endif
