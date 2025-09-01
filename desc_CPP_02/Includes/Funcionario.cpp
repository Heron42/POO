#include "Funcionario.hpp"

Funcionario::Funcionario(const string nome, double salario, const string dataAdmissao) : nome(nome), salario(salario), dataAdmissao(dataAdmissao) {}

void Funcionario::darAumento(double percentual) {
    double aumento = salario * percentual;
    salario += aumento;
}

double Funcionario::getSalario() const { return salario; }

