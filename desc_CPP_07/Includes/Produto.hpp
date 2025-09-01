#ifndef PRODUTO_H_
#define PRODUTO_H_

#include <string>
#include <iostream>
using namespace std;

class Produto {
	int codigoBarras;
	string nome;
	double preco;

protected:
	virtual void print(ostream &out) const;

public:
	Produto(int codigoBarras, const string& nome, double preco);
	friend ostream& operator<< (ostream &out, const Produto &produto);
	friend bool operator==(const Produto& esq, const Produto& dir);
	virtual ~Produto();
};

#endif
