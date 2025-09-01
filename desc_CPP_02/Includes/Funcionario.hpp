#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_

#include <string>
using namespace std;

class Departamento;

class Funcionario {
	string nome;
	double salario;
	string dataAdmissao;
	Departamento* departamento;

	friend class Departamento;

public:
	Funcionario(const string nome, double salario, const string dataAdmissao);
	void darAumento(double percentual);
	double getSalario() const;
};

#endif
