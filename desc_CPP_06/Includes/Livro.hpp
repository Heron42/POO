#ifndef LIVRO_H_
#define LIVRO_H_

#include <string>
#include "Produto.hpp"
using namespace std;

class Livro: public Produto {
	string autor;

protected:
	virtual void print(ostream &out) const;

public:
	Livro(const string& nome, double preco, const string &autor);
	friend ostream& operator<< (ostream &out, Livro &livro);
	virtual ~Livro();
};



#endif
