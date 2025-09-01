#ifndef PRODUTO_H_
#define PRODUTO_H_

#include <string>
#include <iostream>
using namespace std;

class Produto {
	string nome;
	double preco;

protected:
	virtual void print(ostream &out) const;

public:
	Produto(const string& nome, double preco);
	friend ostream& operator<< (ostream &out, const Produto &produto);
	virtual ~Produto();
};

#endif
