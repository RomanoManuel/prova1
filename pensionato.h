#ifndef _pensionato_
#define _pensionato_

#include "persona.h"

class Pensionato : public Persona{
	public:
		Pensionato(int eta) : Persona(eta,"Pensionato"){}
};

#endif
