#ifndef CONTACORRENTEESPECIAL_H_
#define CONTACORRENTEESPECIAL_H_

#include "ContaCorrente.hpp"

class ContaCorrenteEspecial: public ContaCorrente {
	protected:
		double virtual getTaxaOperacao();
};
#endif
