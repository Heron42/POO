#ifndef CD_H_
#define CD_H_

#include "Produto.hpp"

class CD: public Produto {
	int numeroFaixas;

protected:
	virtual void print(ostream &out) const;

public:
	CD(int codigoBarras, const string& nome, double preco, int numeroFaixas);
	friend ostream& operator<< (ostream &out, CD &cd);
	virtual ~CD();
};

#endif
