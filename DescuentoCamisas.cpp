#include <iostream>
using namespace std;

int main (){
	double cantidad_camisas , precio_inicial , precio_final;
	cout << "Introduce la cantidad de camisas que va a comprar: " << endl;
	cin >> cantidad_camisas;
	cout << "Introduce el precio a pagar por la compra de las camisas: " << endl;
	cin >> precio_inicial;
	if (cantidad_camisas >= 3) {
		precio_final = precio_inicial - precio_inicial * 0.2;
	}else {
		precio_final = precio_inicial - precio_inicial * 0.1;
	}
	cout << "Entonces el precio final a pagar es: " << precio_final << endl;
	return 0;
}