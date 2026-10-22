#include <iostream>
using namespace std;

int main() {
    double TE = 0.0;
    int DE = 0;
    double CD;
    
    for (int i=1; i<=7; i++) {
        cout << "Ingrese el consumo del dia " <<i<< " (en kWh): ";
        cin >> CD;
        
        TE = TE + CD;
        
        if (CD > 15) {
            DE = DE+1;
        }
    }
    
    double PD = TE/7;
    
    cout << "El consumo acumulado total de la semana es: " <<TE<< endl;
    cout << "El consumo promedio diario es: " <<PD<< endl;
    cout << "La cantidad de dias con exceso de consumo es: " <<DE<< endl;
    
    return 0;
}

