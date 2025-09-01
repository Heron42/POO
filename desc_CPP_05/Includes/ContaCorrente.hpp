#ifndef CONTACORRENTE_H_
#define CONTACORRENTE_H_

class ContaCorrente {
	double saldo;

protected:
	double virtual getTaxaOperacao();

public:
	ContaCorrente() { saldo = 0; }
	void depositar(double quantia);
	void sacar(double quantia);
	double getSaldo();
};

#endif
