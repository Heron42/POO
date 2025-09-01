#ifndef PESSOA_H_
#define PESSOA_H_

#include <iostream>
#include <string>
using namespace std;

class Pessoa {
	string nome;
	int idade;
	double altura;

public:
	Pessoa(const string&, int, double);

	static bool comparaPorNome(const Pessoa*, const Pessoa*);
	static bool comparaPorIdade(const Pessoa*, const Pessoa*);
	static bool comparaPorAltura(const Pessoa*, const Pessoa*);

	friend ostream& operator<< (ostream&, const Pessoa&);
};

#endif
