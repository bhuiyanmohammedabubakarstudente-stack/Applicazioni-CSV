#include <iostream>
#include <fstream>
using namespace std;
/*Utilizzando il file .csv dell'esercizio precedente, realizzare un programma che effettui le seguenti operazioni:
Inserimento di un nuovo record
Visualizzazione dei file
modifica di un record
cancellazione di un recod
Le operazioni dovranno essere effettuate utilizzando un file d'appoggio.
*/
struct location{
		double x;
		double y;
	};
//Non si può usare array di struct	
struct numcivica{
		string tipovia;
		string nomevia;
		string numero;
		string subalterno;
		string cap;
		string istat;
		string latitudine;
		string longitudine;
		location z;
		
	};
	void inserimento(numcivica x){
		//string y;
	//	int cont=0;
		ofstream scrivi("dati.csv",ios::app);
		
	if(scrivi.is_open()){
	//	while (getline(leggi,y)){
	
	//	while(getline(leggi,y)){
			scrivi<<x.tipovia=="Via"<<endl;
			scrivi<<x.nomevia=="MauroCodussi"<<endl;
			scrivi<<x.numero=="32"<<endl;
			scrivi<<x.subalterno=="A"<<endl;
			scrivi<<x.cap=="24124"<<endl;
			scrivi<<x.istat=="330"<<endl;
			scrivi<<x.latitudine==45.69294574<<endl;
		    scrivi<<x.longitudine==9.644681913<<endl;	
		    scrivi<<x.z.x==9.644681913<<endl;
		    scrivi<<x.z.y==45.69294574<<endl;
		
	}	
		scrivi.close();
	}
	void visualizza(numcivica x){
		string y;
		ifstream leggi("dati.csv");
		if(leggi.is_open()){
			while(getline(leggi,y)){
				
			}
			//leggi.close();
		}
		leggi.close();
	}
void modifica(numcivica x){
	string riga;
	string campo;
	numcivica temp;
	ifstream leggi("dati.csv");
	if(leggi.is_open()){
		getline(leggi,	x.tipovia,",");
		getline(leggi,	x.nomevia,",");
		getline(leggi,	x.numero,",");
		getline(leggi,	x.cap,",");
		getline(leggi,	x.subalterno,",");
		getline(leggi,	x.istat,",");
		getline(leggi,	x.latitudine,",");
		getline(leggi,	x.longitudine,",");
		getline(leggi,	x.z.x,",");
		getline(leggi,	x.z.y,",");
		
		if(x.latitudine==campo){
			
		
	temp.tipovia=x.tipovia;
	temp.nomevia=x.nomevia;
    temp.numero=x.numero;
		x.cap;
		x.subalterno;
		x.istat;
		x.latitudine;
		x.longitudine;
		x.z.x;
		x.z.y;
	}
		
	}
	
}	
	
int main(int argc, char** argv) {
	numcivica x1;
	
	return 0;
}