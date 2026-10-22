#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int i = 1;
    char respuesta;
    
    do {
        cout << "Numero :" << i << endl;
        i = i + 1;
        cout << "¿Desea imprimir el siguiente numero s/n:" << endl;
        cin >> respuesta;

    } while(respuesta == 's' || respuesta == 'S');

    return 0;
}

