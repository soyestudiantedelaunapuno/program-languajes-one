#include <iostream>
using namespace std;

int main() {
    double ST = 0.0;
    int AC = 0;
    double T;
    
    for (int i=1; i<=5; i++) {
        cout << "Ingrese la temperatura " <<i<< " (en grados Celsius): ";
        cin >> T;
        
        ST = ST + T;
        
        if (T > 28.0) {
            AC = AC+1;
        }
    }
    
    double PD = ST/5;
    
    cout << "La temperatura promedio del dia es: " <<PD<< endl;
    cout << "La cantidad total de alertas por calor extremo son de: " <<AC<< endl;
    
    return 0;
}
