#include <iostream>
#include <string>

#include "Funcionario.hpp"
#include "Departamento.hpp"
#include "Empresa.hpp"

using namespace std;

int main() {

    string nomeEmpresa;
    string cnpj;
    int numDeps;

    cin >> nomeEmpresa;
    cin >> cnpj;
    cin >> numDeps;

    Empresa empresa(nomeEmpresa, cnpj, numDeps);

    string nomeDep;
    int numFuncs;
    for (int i = 0; i < numDeps; i++) {
        cin >> nomeDep;
        cin >> numFuncs;

        Departamento* dep = new Departamento(nomeDep, numFuncs);

        string nomeFuncionario;
        double salario;
        string dataAdmissao;

        for (int j = 0; j < numFuncs; j++) {
            cin >> nomeFuncionario;
            cin >> salario;
            cin >> dataAdmissao;

            Funcionario* func = new Funcionario(nomeFuncionario, salario, dataAdmissao);
            dep->adicionar(func);
        }

        empresa.adicionar(dep);
    }

    empresa.darAumento(0, 0.1);
    empresa.transferir(0, 0, 1);

    cout << empresa;
}
