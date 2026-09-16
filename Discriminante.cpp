#include <iostream>
#include <cmath>
#include <complex> // Librería especial para números complejos

using namespace std;

int main() {
    // Usamos double para mayor precisión en los decimales
    double a, b, c;

    cout << "--- Extractor de Raices Cuadraticas ---" << endl;
    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    // Validación básica: 'a' no puede ser cero en una ecuación de segundo grado
    if (a == 0) {
        cout << "Error: 'a' no puede ser cero. No es una ecuacion de segundo grado." << endl;
        return 1; 
    }

    // Calculamos el discriminante (b^2 - 4ac)
    double discriminante = (b * b) - (4 * a * c);

    // Creamos las variables usando el tipo complex de C++
    complex<double> x1, x2;

    if (discriminante >= 0) {
        // Caso 1: Las raíces son números reales
        x1 = (-b + sqrt(discriminante)) / (2.0 * a);
        x2 = (-b - sqrt(discriminante)) / (2.0 * a);

        cout << "\nLas raices son reales:" << endl;
        cout << "x1 = " << x1.real() << endl;
        cout << "x2 = " << x2.real() << endl;
    } 
    else {
        // Caso 2: El discriminante es negativo, genera números complejos
        // Pasamos el discriminante a tipo complex para que sqrt() extraiga la raíz imaginaria
        complex<double> comp_discriminante(discriminante, 0.0);
        complex<double> raiz_compleja = sqrt(comp_discriminante);

        x1 = (-b + raiz_compleja) / (2.0 * a);
        x2 = (-b - raiz_compleja) / (2.0 * a);

        cout << "\nLas raices son complejas conjugadas:" << endl;
        // Imprime directamente en formato matemático (ParteReal, ParteImaginaria)
        cout << "x1 = " << x1.real() << " + " << x1.imag() << "i" << endl;
        cout << "x2 = " << x2.real() << " - " << abs(x2.imag()) << "i" << endl;
    }

    return 0;
}

