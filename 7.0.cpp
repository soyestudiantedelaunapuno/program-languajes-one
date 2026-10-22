#include <iostream>
using namespace std;

int main() {
    double SumadePesos = 0.0;
    int BajodePeso = 0;
    int ContadorValidos = 0;
    double Peso;
    double PesoMaximo = -1.0;
    double pesoMinimo = 999.0;
    
    for (int i = 1; i <= 8; i++) {
    	cout << "Ingrese el peso de la botella " << (ContadorValidos + 1)<< ": ";
        cin >> Peso;
        
        if (Peso <= 0) {
            cout << "Error: El peso debe ser mayor a 0." << endl;
        } else {
            ContadorValidos = ContadorValidos + 1;
            SumadePesos = SumadePesos + Peso;
            
            if (Peso < 490.0) {
                BajodePeso = BajodePeso + 1;
            }
            
            if (Peso > PesoMaximo) {
                PesoMaximo = Peso;
            }
            
            if (Peso < pesoMinimo) {
                pesoMinimo = Peso;
            }
        }
    }
    
    double PesoPromedio = SumadePesos / 8;
    
    cout << "Peso promedio del lote: " << PesoPromedio << endl;
    cout << "Cantidad de botellas con bajo peso: " << BajodePeso << endl;
    cout << "Peso maximo del lote: " << PesoMaximo << endl;
    cout << "Peso minimo del lote: " << pesoMinimo << endl;
    
    return 0;
}
