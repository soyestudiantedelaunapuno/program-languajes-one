#include <iostream>

using namespace std;

int main() {

	int estatura, peso, imc;
	cout << "Ingrese el valor del peso"<<endl;
	cin >> peso;
	cout << "Ingrese el valor de la estatura"<<endl;
	cin >> estatura;
	imc = peso / (estatura * estatura);
	cout << "Tu Indice de Masa Corporal es: " << imc << endl;
	
	if (imc < 18.5) {
		cout << "Tu categoria es Bajo " << endl;
	}
	else if (imc >= 18.5 && imc <= 24.9) {
		cout << "Tu peso es normal" << endl;
	}
	else if (imc >= 25.0 && imc <= 29.9) {
		cout << "Tienes Sobrepeso" << endl;
	}
	else if (imc >= 30.0 && imc <= 34.9) {
		cout << "Tienes Obesidad de Grado 1" << endl;
	}
	else if (imc >= 35.0 && imc <= 39.9) {
		cout << "Tienes Obesidad de Grado 2" << endl;
	}
	else{
		cout << "Tienes Obesidad de Grado 3" << endl;
	}
	
	return 0;
}
