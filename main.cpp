#include <string>
#include <iostream>
#include "prototipi.h"

using namespace std;

int main() {
	string stringa = "Questa è solo una stringa d'esempio con tanti carateri diversi che è possibile criptare";
	char* carattere = NULL; //creo un puntatore di tipo char e gli assegno inizialmente il valore NULL;
	carattere = new char; // assegno dinamicamente un indirizzo di memoria al puntatore;
	
	
	//cripto un singolo carattere a scelta dell'utente all'interno della stringa:
	cout << "Inserisci il carattere da criptare: " << endl;
	cin >> *carattere;//input dell'utetne che stabilirà quale carattere criptare;
	criptaCharStringa(stringa, *carattere); // dereferenzio il puntatore creato in precedenza per accedere al valore contenuto nell'are di valore a cui punta;
	cout <<"criptato il carattere "<<*carattere<<" all'interno della stringa: "<< stringa << endl;

	//ora decripto il singolo carattere precedentemente sostituito con *;
	decriptaCharStringa(stringa, *carattere);
	cout <<endl<< "stringa decriptata: " << stringa << endl;

	delete carattere; //libero la memoria utilizzata dal puntatore;

	//cripto l'intera stringa:
	criptaStringa(stringa);
	cout << endl << endl << "stringa totalmente criptata: " << stringa << endl;

	//e la decripto:
	decripta(stringa);
	cout << endl << endl << "stringa decriptata: " << stringa << endl;











	return 0;
}