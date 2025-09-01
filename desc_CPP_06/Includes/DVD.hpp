#ifndef DVD_H_
#define DVD_H_

#include "Produto.hpp"

class DVD: public Produto {
	int duracao;

protected:
	virtual void print(ostream &out) const;

public:
	DVD(const string& nome, double preco, int duracao);
	friend ostream& operator<< (ostream &out, DVD &dvd);
	virtual ~DVD();
};

#endif
