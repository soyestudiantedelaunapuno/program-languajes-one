#include <iostream>

using namespace std;

int main()
{
    char respuesta;
    int numero;
    
    do {
        cout << "¿De que numero quieres generar tabla?: ";
        cin >> numero;
        
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }
        
        cout << "¿Desea generar otra tabla (responde solo s/n): ";
        cin >> respuesta;

    } while(respuesta == 's' || respuesta == 'S');

    return 0;
}


