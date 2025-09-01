#include "Departamento.hpp"

Departamento::Departamento(const string nome, const int numFuncs) : nome(nome), numFuncs(numFuncs) {
    idxFuncs = 0;
    funcionarios = new Funcionario*[numFuncs];
}

string Departamento::getNome() const{ return nome; }

void Departamento::adicionar(Funcionario* funcionario) {
    if (idxFuncs < numFuncs) {
        funcionarios[idxFuncs] = funcionario;
        idxFuncs++;
    }
}

void Departamento::darAumento(const double percentual) {
    for (int i = 0; i < numFuncs; i++) {
        funcionarios[i]->darAumento(percentual);
    }
}

void Departamento::remover(int idx) {
    if (idx >= 0 && idx < idxFuncs) {
        delete funcionarios[idx];
        for (int i = idx; i < idxFuncs - 1; i++) {
            funcionarios[i] = funcionarios[i + 1];
        }
        funcionarios[idxFuncs - 1] = nullptr;
        idxFuncs--;
    }
}

void Departamento::transferir(const int idxFunc, Departamento* destino) {
    destino->adicionar(funcionarios[idxFunc]);
    remover(idxFunc);
}

double Departamento::calcularCusto() const {
    double custoTotal = 0;
    for (int i = 0; i < numFuncs; i++) {
        custoTotal+= funcionarios[i]->getSalario();
    }

    return custoTotal;
}
