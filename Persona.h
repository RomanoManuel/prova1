#ifndef _Persona_
#define _Persona_


#include <sstream>
#include <string>
#include <fstream>
#include<iostream>
using namespace std;

class Persona{
	public:
		int eta;
		string categoria;
		
		Persona(int eta,string categoria){
			this->eta=eta;
			this->categoria=categoria;
		}
		
		int geteta(){
			return this->eta;
		}
		
		string getcat(){
			return this->categoria;
		}
		
		string stampaNodo(){
       		stringstream ss;
       		ss <<" ciao sono un " <<categoria << " ed ho  "  << eta <<" anni "<< endl;
       		return ss.str();
    	}
};

#endif
