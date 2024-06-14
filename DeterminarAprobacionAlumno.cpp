#include <iostream>
using namespace std;

int main (){
	double calificacion1 , calificacion2 , calificacion3 , promedio;
	cout << "Introduce la primera calificacion:" << endl;
	cin >> calificacion1;
	cout << "Introduce la segunda calificacion:" << endl;
	cin >> calificacion2;
	cout << "Introduce la tercera calificacion:" << endl;
	cin >> calificacion3;
	promedio = (calificacion1 + calificacion2 + calificacion3)/3;
	if (promedio >= 70){
		cout << "Su promedio es de: " << promedio << ", usted aprobo";
	}else{
				cout << "Su promedio es de: " << promedio << ", usted desaprobo";
	}
	return 0;
}