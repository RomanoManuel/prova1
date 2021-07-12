#ifndef _lavoratore_
#define _lavoratore_

#include "persona.h"

class Lavoratore : public Persona{
	public:
		Lavoratore(int eta) : Persona(eta,"Lavoratore"){}
};

#endif
