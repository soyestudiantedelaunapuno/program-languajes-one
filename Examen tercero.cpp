#include <iostream>

using namespace std;

int main() {
    cout << "Hello world!" << endl;
    
    int n;
    cout << "Ingrese la cantidad de notas a registrar: ";
    cin >> n;
    int notas[n]; 
    float suma = 0;
    
    cout << "\n LECTURA DE NOTAS" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese la nota para el indice [" << i << "]: ";
        cin >> notas[i];
    }
    cout << "\n LISTA DE TODAS LAS NOTAS" << endl;
    for (int i = 0; i < n; i++) {
  		 cout << "Nota en indice [" << i << "]: " << notas[i] << endl;
        suma += notas[i];
    }
    
    float promedio = suma / n;
    cout << "RESULTADOS DEL ARREGLO" << endl;
    cout << "suma total de notas" << suma << endl;
    cout << "El promedio de las " << n << " notas es: " << promedio << endl;
    
    return 0;
}

