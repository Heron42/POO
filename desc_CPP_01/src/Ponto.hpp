#ifndef PONTO_H_
#define PONTO_H_

class Ponto {
	double x, y;

public:
	Ponto(double _x = 0, double _y = 0);

	double distancia(const Ponto& ponto) const;
};

#endif
