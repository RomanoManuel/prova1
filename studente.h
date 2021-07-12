#ifndef _studente_
#define _studente_

#include "persona.h"

class Studente : public Persona{
	public:
		Studente(int eta) : Persona(eta,"Studente"){}
};

#endif
