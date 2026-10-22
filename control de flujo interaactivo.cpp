#include <iostream>
using namespace std;

int main() {
    int matriz[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    cout << "Tabla del uno al diez" << endl << endl;
    for (int i = 0; i < 10; i++) {
        cout << "TABLA DEL " << (i + 1) << ":" << endl;
        
        for (int j = 0; j < 10; j++) {
            cout << (i + 1) << " x " << (j + 1) << " = " << matriz[i][j] << endl;
        }
        
        cout << "				" << endl;
    }

    return 0;
}
