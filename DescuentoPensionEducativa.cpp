#include <iostream>
using namespace std;

int main() {
    float promedio, pensionEducativa, totalAPagar;
    const float IGV = 0.18;
    const float descuento = 0.30;
    cout << "Ingrese el promedio obtenido: ";
    cin >> promedio;
    cout << "Ingrese la pension educativa: ";
    cin >> pensionEducativa;
    if (promedio >= 18) {
        totalAPagar = pensionEducativa * (1 - descuento);
    } else {
        totalAPagar = pensionEducativa * (1 + IGV);
    }
    cout << "El total a pagar es: " << totalAPagar << endl;
    return 0;
}
