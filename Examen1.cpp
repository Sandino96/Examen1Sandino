#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void menu();
bool ejercicio1(char*);
void ejercicio2();
void ejercicio3();

int main(int argc, char*agrv[]){
	menu();
	return 0;
}

void menu(){
	int opc;
	while(opc < 4){
		cout <<  "1.-Ejercicio 1" << endl;
		cout <<  "2.-Ejercicio 2" << endl;
		cout <<  "3.-Ejercicio 3" << endl;
		cout <<  "4.-Salir" << endl;
		cout <<  "Opcion: ";
		cin >> opc;
		if(opc == 1){
			char* frase = new char[144];
			cout << "Ingrese frase: ";
			cin.ignore();
			cin.getline(frase,144);
			cout << frase << endl;
			/*if(ejercicio1(frase)){
				cout << "Es un pangrama" << endl;
			} else {
				cout << "No es un pangrama" << endl;
			}*/
			delete[] frase;
		} else if (opc == 2){
					
		} else if(opc == 3){
		
		}
	}
}

bool ejercicio1(char* frase){
	char letras[] = "abcdefghijklmnopqrstuvwxyz";
	for(int i = 0; frase[i]; i++){
		
	}
}

void ejercicio2(){
	
}
