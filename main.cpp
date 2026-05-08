#include <iostream>
using namespace std;
#include <fstream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	struct location{
		double x;
		double y;
	};
	struct numcivica{
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
	
string visualizzadati(numcivica arr[],int dim ){
	string s;
	for(int i=0;i<dim;i++){
		s+=arr[i].tipovia+"\t";
		s+=arr[i].nomevia+"\t";
		s+=arr[i].numero+"\t";
		s+=arr[i].subalterno+"\t";
		s+=arr[i].cap+"\t";
		s+=arr[i].istat+"\t";
		s+=to_string(arr[i].latitudine)+"\n";
		s+=to_string(arr[i].longitudine)+"\n";
		s+=to_string(arr[i].z.x)+"\t";
		s+=to_string(arr[i].z.y)+"\t";
	}
	return s;
	
}

// lettura riga per riga il file e per ogni riga estraggo i campi e li salvo nel campo giusto.
void caricadati(numcivica arr[100],string nome){
ifstream leggi("dati.csv");
if(leggi.is_open()){
string riga;
while(getline(leggi,riga)){
	
}
leggi.close();
}
else{
	cout<<"file non è stato aperto correttamente"<<endl;
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
	numcivica dati[100];
	
	caricadati(dati,"dati.csv");
	return 0;
}