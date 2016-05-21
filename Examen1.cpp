#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void menu();
bool ejercicio1(char*);
void ejercicio2();
char* ejercicio3(char*);

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
			if(ejercicio1(frase)){
				cout << "Es un pangrama" << endl;
			} else {
				cout << "No es un pangrama" << endl;
			}
			delete[] frase;
		} else if (opc == 2){
			ejercicio2();
		} else if(opc == 3){
			char* morse = new char[144];
			cout << "Ingrese su morse: ";
			cin.ignore();
			cin.getline(morse,144);
			cout << "Palabra creada: ";
			for (int i = 0; ejercicio3(morse)[i]; i++){
				cout << ejercicio3(morse)[i];
			}
			cout << endl;
			delete[] morse;
		}
	}
}

bool ejercicio1(char* frase){
	int contador = 0;
	char letras[] = "abcdefghijklmnopqrstuvwxyz";
	char letrasIngresadas[26];
	for(int i = 0; frase[i]; i++){
		for(int j = 0; letras[j]; j++){
			if (frase[i] == letras[j]){
				letrasIngresadas[j] = letras[j];
				cout << letrasIngresadas[j] << endl;
			}
		}
	}
	if (contador >= 26){
		return true;
	} else {
		return false;
	}
}

void ejercicio2(){
	int decision = 1;
	char* totalDeFrases = new char[500];
	char letras[] = "abcdefghijklmnopqrstuvwxyz";
	char* letrasUsadas = new char[144];
	while (decision == 1){
		int contador = 0, contadorPalabras = 0;
		char* frase = new char[144];
		cout << "Ingrese frase: ";
		cin.ignore();
		cin.getline(frase,144);
		for(int i = 0; frase[i]; i++){
			contador++;
			if(frase[i] == ' '){
				contador--;
				contadorPalabras++;
				cout << "Palabra " << contadorPalabras << " = " << contador << endl;
				contador = 0;
			}
		}
		for (int i = 0; frase[i]; i++){
			letrasUsadas[0] = frase[0];
			for (int j = 1; letrasUsadas[j]; j++){
				if(frase[i] != letrasUsadas[j]){
					letrasUsadas[j] = frase[i];
				}
			}
		}
		contadorPalabras++;
		cout << "Palabra " << contadorPalabras << " = " << contador << endl;
		cout << "Hay " << contadorPalabras << " palabras" << endl;
		cout << "Letras usadas: " << letrasUsadas << endl;
		strcat(totalDeFrases, frase);
		cout << "Desea agregar otra frase: [1=Si/2=No]: ";
		cin >> decision;
		delete[] letrasUsadas;
		delete[] frase;
	}
	int imprimirFrases;
	cout << "Desea imprimir sus frases: [1=Si/2=No]";
	cin >> imprimirFrases;
	if(imprimirFrases == 1){
		cout << totalDeFrases << endl;
		delete[] totalDeFrases;	
	} else if (imprimirFrases == 2){
		cout << "Gracias" << endl;
		delete[] totalDeFrases;	
	}
}

char* ejercicio3(char* morse){
	char* nuevaPalabra = new char[144];
	int size = 0, j = 0;
	char temporal[5];
	for (int i = 0; morse[i]; i++){
		if(morse[i] != '&'){
			temporal[j] = morse[i];
			j++;
		}
	}
	for (int i = 0; temporal[i]; i++){
		if(temporal[0] == '.' && temporal[1] == '-'){
			nuevaPalabra[size] = 'a';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '.' && temporal[2] == '.' && temporal[3] == '.'){
			nuevaPalabra[size] = 'b';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '.' && temporal[2] == '-' && temporal[3] == '.'){
			nuevaPalabra[size] = 'c';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '.' && temporal[2] == '.'){
			nuevaPalabra[size] = 'd';
			size++;
		} else if (temporal[0] == '.'){
			nuevaPalabra[size] = 'e';
			size++;
		} else if (temporal[0] == '.' && temporal[1] == '.' && temporal[2] == '-' && temporal[3] == '.'){
			nuevaPalabra[size] = 'f';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '-' && temporal[2] == '.'){
			nuevaPalabra[size] = 'g';
			size++;
		} else if (temporal[0] == '.' && temporal[1] == '.' && temporal[2] == '.' && temporal[3] == '.'){
			nuevaPalabra[size] = 'h';
			size++;
		} else if (temporal[0] == '.' && temporal[1] == '.'){
			nuevaPalabra[size] = 'i';
			size++;
		} else if (temporal[0] == '.' && temporal[1] == '-' && temporal[2] == '-' && temporal[3] == '-'){
			nuevaPalabra[size] = 'j';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '.' && temporal[2] == '-'){
			nuevaPalabra[size] = 'k';
			size++;
		} else if (temporal[0] == '.' && temporal[1] == '-' && temporal[2] == '.' && temporal[3] == '.'){
			nuevaPalabra[size] = 'l';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '-'){
			nuevaPalabra[size] = 'm';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '.'){
			nuevaPalabra[size] = 'n';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '-' && temporal[2] == '-'){
			nuevaPalabra[size] = 'o';
			size++;
		} else if (temporal[0] == '.' && temporal[1] == '-' && temporal[2] == '-' && temporal[3] == '.'){
			nuevaPalabra[size] = 'p';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '-' && temporal[2] == '.' && temporal[3] == '-'){
			nuevaPalabra[size] = 'q';
			size++;
		} else if (temporal[0] == '.' && temporal[1] == '-' && temporal[2] == '.'){
			nuevaPalabra[size] = 'r';
			size++;
		} else if (temporal[0] == '.' && temporal[1] == '.' && temporal[2] == '.'){
			nuevaPalabra[size] = 's';
			size++;
		} else if (temporal[0] == '-'){
			nuevaPalabra[size] = 't';
			size++;
		} else if (temporal[0] == '.' && temporal[1] == '.' && temporal[2] == '-'){
			nuevaPalabra[size] = 'u';
			size++;
		} else if (temporal[0] == '.' && temporal[1] == '.' && temporal[2] == '.' && temporal[3] == '-'){
			nuevaPalabra[size] = 'v';
			size++;
		} else if (temporal[0] == '.' && temporal[1] == '-' && temporal[2] == '-'){
			nuevaPalabra[size] = 'w';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '.' && temporal[2] == '.' && temporal[3] == '-'){
			nuevaPalabra[size] = 'x';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '.' && temporal[2] == '-' && temporal[3] == '-'){
			nuevaPalabra[size] = 'y';
			size++;
		} else if (temporal[0] == '-' && temporal[1] == '-' && temporal[2] == '.' && temporal[3] == '.'){
			nuevaPalabra[size] = 'z';
			size++;
		} else {
			return nuevaPalabra;
		}
		break;
	}
	return nuevaPalabra;
} 