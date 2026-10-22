#include <iostream>

using namespace std;

int main() {
    double sumaTotalVentas = 0.0;
    int clientesPreferenciales = 0;
    double montoVenta;
    

    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese el monto total a pagar del cliente " << i << ": ";
        cin >> montoVenta;
        
        // 2. Calcular la suma total (utilizando un acumulador)
        sumaTotalVentas = sumaTotalVentas + montoVenta;
        
        // 3. Contar clientes con compras mayores a 100 soles (utilizando un contador)
        if (montoVenta > 100) {
            clientesPreferenciales = clientesPreferenciales + 1; // O también: clientesPreferenciales++;
        }
    }
    
    // Calcular el promedio (Suma total / 8 clientes)
    double promedioConsumo = sumaTotalVentas / 8;
    
    // 4. Mostrar resultados en pantalla
    cout << "\n---------- RESULTADOS DEL TURNO MAÑANA ----------" << endl;
    cout << "El total acumulado en caja (Soles): " << sumaTotalVentas << endl;
    cout << "El promedio de consumo por cliente: " << promedioConsumo << endl;
    cout << "La cantidad total de clientes preferenciales: " << clientesPreferenciales << endl;
    
    return 0;
}
