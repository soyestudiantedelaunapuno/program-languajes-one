#include <iostream>
using namespace std;

int main() {
    double suma_total_de_ventas = 0.0;
    int clientes_preferenciales = 0;
    double monto_de_venta;
    
    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese monto del cliente " << i << ": ";
        cin >> monto_de_venta;
        
        suma_total_de_ventas = suma_total_de_ventas + monto_de_venta;
        if (monto_de_venta > 100) {
            clientes_preferenciales = clientes_preferenciales + 1;
        }
    }
    
    double promedio_de_consumo = suma_total_de_ventas / 8;
    
    cout << "El total acumulado en caja (Soles): " << suma_total_de_ventas << endl;
    cout << "El Promedio de consumo por cliente es : " << promedio_de_consumo << endl;
    cout << "La cantidad total de clientes preferenciales es: " << clientes_preferenciales << endl;

    return 0;
}
