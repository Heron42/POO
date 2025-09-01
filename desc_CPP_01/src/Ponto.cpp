#include "Ponto.hpp"
#include <cmath>


Ponto::Ponto(double _x, double _y) : x(_x), y(_y) {}

double Ponto::distancia(const Ponto& ponto) const {
    double d = sqrt(pow(ponto.x - x, 2) + pow(ponto.y - y, 2));

    return d;
}
