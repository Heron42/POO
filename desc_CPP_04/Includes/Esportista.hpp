#ifndef ESPORTISTA_H_
#define ESPORTISTA_H_

#include <iostream>
#include <string>
#include "Pessoa.hpp"
using namespace std;

class Esportista: public Pessoa {
	string time;

public:
	Esportista(const string&, int, double, const string&);

	static bool comparaPorTime(const Esportista*, const Esportista*);

	friend ostream& operator<< (ostream&, const Esportista&);
};

#endif
