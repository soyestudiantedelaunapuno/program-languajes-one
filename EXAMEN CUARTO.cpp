#include <iostream>

using namespace std;

int main() {
    int filas, columnas; 
    
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    
    int matriz[100][100];
    int sumaTotal = 0;
    
    cout << endl << "Ingrese los elementos de la Matriz" << endl;
    for (int i = 0; i < filas; i++) {       
        for (int j = 0; j < columnas; j++) { 	
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    
    cout << endl << "Matriz Impresa" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t"; 
        }
        cout << endl; 
    }
    
    cout << endl << "Suma por Filas" << endl;
    for (int i = 0; i < filas; i++) {       
        int sumaFila = 0;
        
        for (int j = 0; j < columnas; j++) { 
            sumaFila = sumaFila + matriz[i][j];
        }
        
        cout << "Suma de la fila " << i << ": " << sumaFila << endl;
        sumaTotal = sumaTotal + sumaFila;
    }
    
    cout << endl << "La suma de todos los elementos es: " << sumaTotal << endl;
    
    return 0;
}

