#include <iostream>
using namespace std;

int main (){
	int edad , num_pulsasiones;
	char sexo;
	cout << "Ingrese su edad: " << endl;
	cin >> edad;
	cout << "Ingrese su sexo (m/f): " << endl;
	cin >> sexo;
	if (sexo != 'm'){
		num_pulsasiones = (220 - edad) / 10;
	}else{
		num_pulsasiones = (210 - edad) / 10;
	}
	cout << "Entonces el numero de pulsasiones por cada 10 segundos de ejercicio aerobico es: " << num_pulsasiones << endl;
}