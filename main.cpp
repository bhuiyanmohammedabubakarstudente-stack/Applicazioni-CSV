#include <iostream>
using namespace std;
#include <fstream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	struct numerazionecivica{
		string tipovia;
		string nomevia;
		string numero;
		string subalterno;
		string cap;
		string istat;
		double latitudine;
		double longitudine;
		location z;
		
	};
	struct location{
		string x;
		string y;
	};

// lettura riga per riga il file e per ogni riga estraggo i campi e li salvo nel campo giusto.
caricadati(numerazionecivica arr[],string nome){
ifstream leggi("dati.csv");
if(leggi.is_open){

}
}




int main(int argc, char** argv) 
{
	/*
	struct numerazionecivica{
		string tipovia;
		string nomevia;
		string numero;
		string subalterno;
		string cap;
		string istat;
		double latitudine;
		double longitudine;
		location z;
		
	};
	struct location{
		string x;
		string y;
	};*/
	numerazionecivica dati[];
	
	
	return 0;
}