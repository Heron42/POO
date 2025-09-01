#ifndef EMPRESA_H_
#define EMPRESA_H_

#include <string>
#include "Departamento.hpp"
using namespace std;

class Empresa {
	string nome;
	string cnpj;
	Departamento** departamentos;
	int numDeps;
	int idxDeps;

public:
	Empresa(const string nome, const string cnpj, const int numDeps);
	void adicionar(Departamento* departamento);
	void darAumento(const int idx, const double percentual);
	void transferir(const int idxDeptoOrigem, const int idxFunc, const int idxDeptoDestino);
	friend ostream& operator<< (ostream &out, const Empresa &empresa);

	~Empresa() {
		for (int i = 0; i < numDeps; i++) {
			departamentos[i]->~Departamento();
		}
	}
};

#endif
