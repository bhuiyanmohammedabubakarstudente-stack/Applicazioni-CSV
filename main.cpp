#include <iostream>
using namespace std;
#include <fstream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	struct numerazione{
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
	numerazione x;
	
	return 0;
}