#include <iostream>
using namespace std;

int main() {
    int ST = 0;
    int CP = 0;
    int CI = 0;
    int CN = 0;
    int numero;
    
    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        
        ST = ST + numero;
        
        if (numero == 0) {
            CN = CN+1;
        } else if (numero % 2 == 0) {
            CP = CP+1;
        } else {
            CI = CI+1;
        }
    }
    
    cout << "Total de numeros pares: " <<CP<< endl;
    cout << "Total de numeros impares: " <<CI<< endl;
    cout << "Total de numeros nulos: " <<CN<< endl;
    cout << "La suma total: " <<ST<< endl;
    
    return 0;
}

