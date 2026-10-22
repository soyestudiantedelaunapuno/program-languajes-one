//Jeampier Edu Quispe Aruhuanca

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Variables de entrada
    int zona, entregaExpres, tipoCliente;
    double peso;

    // Variables de cálculo
    double costoPorKg = 0.0;
    double costoBasePeso = 0.0;
    double sobretasaPesoPesado = 0.0;
    double recargoExpres = 0.0;
    double descuentoCorporativo = 0.0;
    double montoTotal = 0.0;
    string nombreZona = "";

    // 1. Lectura de datos
    cout << "TARIFICADOR DE ENVIOS" << endl;
    cout << "Seleccione la zona de destino:" << endl;
    cout << "1: Local / Urbana (S/. 5.00 por kg)" << endl;
    cout << "2: Nacional (S/. 10.00 por kg)" << endl;
    cout << "3: America del Sur (S/. 20.00 por kg)" << endl;
    cout << "4: Internacional / Resto del Mundo (S/. 35.00 por kg)" << endl;
    cout << "Ingrese zona (1-4): ";
    cin >> zona;

    // REQUISITO 1: Seleccion de tarifa base con switch-case
    switch (zona) {
        case 1:
            costoPorKg = 5.00;
            nombreZona = "Local / Urbana";
            break;
        case 2:
            costoPorKg = 10.00;
            nombreZona = "Nacional";
            break;
        case 3:
            costoPorKg = 20.00;
            nombreZona = "America del Sur";
            break;
        case 4:
            costoPorKg = 35.00;
            nombreZona = "Internacional / Resto del Mundo";
            break;
        default:
            cout << "\nERROR: Numero de zona no valido. Ejecucion terminada." << endl;
            return 0; // Termina la ejecucion
    }

    cout << "Ingrese el peso total del paquete en kg: ";
    cin >> peso;

    // REQUISITO 2: Validacion de peso con if / else
    if (peso <= 0 || peso > 50) {
        cout << "\nERROR: El peso debe ser mayor a 0 kg y maximo 50 kg. Ejecucion terminada." << endl;
        return 0; // Termina la ejecucion
    }

    cout << "¿Requiere servicio entrega expres? (1 = Si, 0 = No): ";
    cin >> entregaExpres;

    cout << "Ingrese tipo de cliente (1 = Corporativo/Frecuente, 0 = Particular): ";
    cin >> tipoCliente;

    // 2. Procesamiento de costos y ajustes
    costoBasePeso = peso * costoPorKg;

    // Recargo por paquete pesado (> 15 kg)
    if (peso > 15) {
        sobretasaPesoPesado = 12.00;
    }

    // Servicio Expres (+25% sobre el costo base por peso)
    if (entregaExpres == 1) {
        recargoExpres = costoBasePeso * 0.25;
    }

    // Calculo del monto acumulado antes del descuento
    montoTotal = costoBasePeso + sobretasaPesoPesado + recargoExpres;

    // Descuento Corporativo (10% sobre el monto total final acumulado)
    if (tipoCliente == 1) {
        descuentoCorporativo = montoTotal * 0.10;
        montoTotal = montoTotal - descuentoCorporativo;
    }

    // REQUISITO 3: Salida esperada / Desglose
    cout << fixed << setprecision(2); // Configura salida a dos decimales
    cout << "\n==============================================" << endl;
    cout << "             DESGLOSE DE COTIZACION           " << endl;
    cout << "==============================================" << endl;
    cout << "Zona elegida:                    " << nombreZona << endl;
    cout << "Peso del paquete:                " << peso << " kg" << endl;
    cout << "Costo base por peso:             S/. " << costoBasePeso << endl;
    cout << "Sobretasa carga pesada (>15kg):  S/. " << sobretasaPesoPesado << endl;
    cout << "Recargo por envio expres:        S/. " << recargoExpres << endl;
    cout << "Descuento corporativo (10%):    -S/. " << descuentoCorporativo << endl;
    cout << "----------------------------------------------" << endl;
    cout << "MONTO TOTAL A PAGAR:             S/. " << montoTotal << endl;
    cout << "==============================================" << endl;

    return 0;
}
