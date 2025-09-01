#include "Triangulo.hpp"
#include <cmath>

Triangulo::Triangulo(double xa, double ya, double xb, double yb, double xc, double yc) : 
            a(xa, ya), b(xb, yb), c(xc, yc) {}

double Triangulo::perimetro() const {
    double ladoA = a.distancia(b);
    double ladoB = b.distancia(c);
    double ladoC = c.distancia(a);
    return ladoA + ladoB + ladoC;
}
