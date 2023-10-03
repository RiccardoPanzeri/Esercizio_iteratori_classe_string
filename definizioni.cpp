#include "prototipi.h"


using namespace std;

void criptaCharStringa(string &stringa, char carattere) { //le stringhe della classe string, non vengono passate automaticamente per riferimento, in quanto sono oggetti e non array;

	string::iterator iteratore;

	for (iteratore = stringa.begin(); iteratore != stringa.end(); iteratore++) { //standoa quanto ho capito, non è possibile utilizzare  l'aritmetica dei puntatori per la classe string; si ricorre invece all'oggetto iteratore; 
		if (*iteratore == carattere) { //l'iteratore va ovviamente dereferenziato per poterne modificare il contenuto;
			*iteratore = '*';
		}

	}
}

void decriptaCharStringa(string& stringa, char carattere)
{
	string::iterator iteratore;
	for (iteratore = stringa.begin(); iteratore != stringa.end(); iteratore++) {
		if (*iteratore == '*') {
			*iteratore = carattere;
		}
	}
}


void criptaStringa(string &stringa) {
	string::iterator iteratore;

	for (iteratore = stringa.begin(); iteratore != stringa.end(); iteratore++) {
		*iteratore += 5;
	}
}


void decripta(string &stringa) {
	string::iterator iteratore;
	for (iteratore = stringa.begin(); iteratore != stringa.end(); iteratore++) {
		*iteratore -= 5;
	}
}


