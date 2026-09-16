#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double x1, x2, discriminante;
    
    cout << "ingrese A: "; cin >> a;
    cout << "ingrese B: "; cin >> b;
    cout << "ingrese C: "; cin >> c;
    
    discriminante = (b * b) - (4 * a * c);

    // Evaluamos el resultado de la función
    if (discriminante > 0) {
    	x1 = (-b + sqrt(discriminante)) / (2 * a);
    	x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "El resultado de X_sub1 es: " << x1 << endl;
		cout << "El resultado de X_sub2 es: " << x2 << endl;
    }
    else {
    	cout << "El Resultado es I, siendo la discriminante = " << discriminante << endl;
	}
	
    return 0;
}

