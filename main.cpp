#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Ingresa los grados Celsius: ";
    cin >> celsius;

    // Aplicamos la fórmula de conversión
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << celsius << " grados Celsius equivalen a " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}
