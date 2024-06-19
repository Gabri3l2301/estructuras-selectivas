#include <iostream>
using namespace std;

int main() {
    int cantidadLlantas;
    float precioPorLlanta, totalAPagar;
    cout << "Ingrese la cantidad de llantas a comprar: ";
    cin >> cantidadLlantas;
    if (cantidadLlantas < 5) {
        precioPorLlanta = 300;
    } else if (cantidadLlantas <= 10) {
        precioPorLlanta = 250;
    } else {
        precioPorLlanta = 200;
    }
    totalAPagar = precioPorLlanta * cantidadLlantas;
    cout << "El precio por cada llanta es: $" << precioPorLlanta << endl;
    cout << "El total a pagar es: $" << totalAPagar << endl;
    return 0;
}
