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
		s+=to_string(arr[i].latitudine)+"\t";
		s+=to_string(arr[i].longitudine)+"\t";
		s+=to_string(arr[i].z.x)+"\t";
		s+=to_string(arr[i].z.y)+"\t";
	}
	return s;
	
}

// lettura riga per riga il file e per ogni riga estraggo i campi e li salvo nel campo giusto.
void caricadati(numcivica arr[],string nome){
ifstream leggi(nome);
if(leggi.is_open()){
string riga;
int i=0;
getline(leggi,riga);
while(i<100&&getline(leggi, arr[i].tipovia, ',')){

getline(leggi, arr[i].nomevia, ',');
getline(leggi, arr[i].numero, ',');
getline(leggi, arr[i].subalterno, ',');
getline(leggi, arr[i].cap, ',');
getline(leggi, arr[i].istat, ',');
string temp;
getline(leggi, temp, ','); arr[i].latitudine = stod(temp);
getline(leggi, temp, ','); arr[i].longitudine = stod(temp);
getline(leggi, temp); // "(45.692781113,9.644686683)"
int pos = temp.find(',', 1); // trova la virgola in mezzo (parte da 1 per saltare il "(")
arr[i].z.x = stod(temp.substr(2, pos - 2));       // salta "(  e prende fino alla virgola
arr[i].z.y = stod(temp.substr(pos + 1, temp.size() - pos - 3)); // salta virgola e ")  finale
i++;
}
leggi.close();
}
else{
	cout<<"file non e' stato aperto correttamente"<<endl;
}
}







int ricerca(string y,int dim,numcivica arr[],numcivica temp[]){
    int contatore=0;
	for(int i=0;i<dim;i++){
	if(arr[i].nomevia==y){
	temp[contatore]=arr[i];
	contatore++;	
	}
		
	}
	
	return contatore;
}

void ordinancivico(numcivica arr[],int dim){
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim-1;j++){
			if(stoi(arr[j].numero)>stoi(arr[j+1].numero)){
				string temp=arr[j].numero;
				arr[j].numero=arr[j+1].numero;
				arr[j+1].numero=temp;
			}
		}
	}
}

//MAIN

int main(int argc, char** argv) 
{

	string y;
	numcivica dati[100];
	int n=100;
	int totncivico;
	caricadati(dati,"dati.csv");
	int scelta;
	numcivica temp[100];
	do{
	cout<<"--------------------MENU'---------------------"<<endl;	
	cout<<"0 - FINE PROGRAMMA"<<endl;
	cout<<"1 - (R)Visualizzazione"<<endl;
    cout<<"2 - RICERCA"<<endl;
	//cout<<visualizzadati(dati,n);
	
	cout<<"Scegli cosa vuoi fare"<<endl;
	cin>>scelta;
	fflush(stdin);
	
	switch(scelta){
		
	//visualizza
		
		case 1: 
		cout<<visualizzadati(dati,n);
		break;
	
	
	//ricerca
	
	case 2: cout<<"Inserisci la via di cui vuoi sapere i numeri civici"<<endl;
	getline(cin,y);
    totncivico=ricerca(y,n,dati,temp);
   
    if(totncivico==0){
    	cout<<"Il nome della via da te inserito non e' presente nel file"<<endl;
	}
	else{
		
	cout<<"La via ha "<<totncivico<< " numero/i civico/i"<<endl;
	ordinancivico(temp,totncivico);	
	cout<<"Numero/i Civico/i della via "<<y<<" ordinati: "<<endl;
	for(int i=0;i<totncivico;i++){
		cout<<temp[i].numero<<endl;
	}
	}
	//ordinancivico(temp,n);
	
	break;
	
	
}
}
while(scelta!=0);

}