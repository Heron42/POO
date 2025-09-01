#ifndef DEPARTAMENTO_H_
#define DEPARTAMENTO_H_

#include <string>
#include "Funcionario.hpp"
using namespace std;

class Departamento {
	string nome;
	Funcionario** funcionarios;
	int numFuncs;
	int idxFuncs;

public:
	Departamento(const string nome, const int numFuncs);
	string getNome() const;
	void adicionar(Funcionario* funcionario);
	void darAumento(const double percentual);
	void remover(int idx);
	void transferir(const int idxFunc, Departamento* destino);
	double calcularCusto() const;
	~Departamento() {
		for (int i = 0; i < idxFuncs; i++) {
			delete funcionarios[i];
		}
		delete[] funcionarios;
	}
};

#endif
