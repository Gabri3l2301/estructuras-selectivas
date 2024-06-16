#include <iostream>
using namespace std;

int main (){
	double numero , precio_inicial , descuento;
	cout << "Ingrese el monto inicial a pagar: " << endl;
	cin >> precio_inicial;
	cout << "Ingrese un numero al azar: " << endl;
	cin >> numero;
	if (numero >= 74){
		descuento = precio_inicial * 0.2;
	}else {
		descuento = precio_inicial * 0.15;
	}
	cout << "Entonces el descuento aplicado al total de la compra es: " << descuento << endl;
	return 0;
}