#include "Empresa.hpp"
#include <iostream>

Empresa::Empresa(const string nome, const string cnpj, const int numDeps) : nome(nome), cnpj(cnpj), numDeps(numDeps) {
    idxDeps = 0;
    departamentos = new Departamento*[numDeps];
}

void Empresa::adicionar(Departamento* departamento) {
    if (idxDeps < numDeps) {
        departamentos[idxDeps] = departamento;
        idxDeps++;
    } 
}

void Empresa::darAumento(const int idx, const double percentual) {
    departamentos[idx]->darAumento(percentual);
}

void Empresa::transferir(const int idxDeptoOrigem, const int idxFunc, const int idxDeptoDestino) {
    departamentos[idxDeptoOrigem]->transferir(idxFunc, departamentos[idxDeptoDestino]);
}

ostream& operator<<(ostream &out, const Empresa &empresa) {

    for (int i = 0; i < empresa.numDeps; i++) {
        out << empresa.departamentos[i]->getNome();
        out << " ";
        out << empresa.departamentos[i]->calcularCusto() << endl;
    }

    return out;
}
