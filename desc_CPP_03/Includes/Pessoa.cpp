#include "Pessoa.hpp"

Pessoa::Pessoa(const string& nome, int idade, double altura): nome(nome), 
idade(idade), altura(altura) {}

bool Pessoa::comparaPorNome(const Pessoa* p1, const Pessoa* p2){
    return p1->nome > p2->nome;
}

bool Pessoa::comparaPorIdade(const Pessoa* p1, const Pessoa* p2){
    return p1->idade > p2->idade;
}

bool Pessoa::comparaPorAltura(const Pessoa* p1, const Pessoa* p2){
    return p1->altura > p2->altura;
}

ostream& operator<<(ostream& os, const Pessoa& p){
    os << p.nome << "(idade: " << p.idade << "; altura: " << p.altura << ")";

    return os;
}