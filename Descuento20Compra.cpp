#include <iostream>
using namespace std;

int main (){
	double compra , compra_final;
	cout << "Introduce el total de la compra: " << endl;
	cin >> compra;
	if (compra > 1000){
		compra_final = compra - compra * 0.2;
	}else {
		compra_final = compra;
	}
	cout << "La cantidad que pagara por su compra es de: " << compra_final << endl;
	return 0;
}