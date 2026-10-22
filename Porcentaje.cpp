#include <iostream>

using namespace std;

int main() {
    int numero;
    
    cout << "Digite un numero entero: ";
    cin >> numero;

    // Evaluamos el resultado de la función
    if (numero % 2 == 0 ) {
        cout << "El numero es par" << endl;
    }
    else {
		cout << "El numero es impar" << endl;
    }
    
    return 0;
}

