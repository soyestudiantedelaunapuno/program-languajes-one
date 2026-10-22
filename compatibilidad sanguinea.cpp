#include <iostream>
#include <string>

using namespace std;

int main() {
    string tipoSangre;
    int opcionID = 0;

    cout << "=== Consultor de Compatibilidad Sanguinea ===" << endl;
    cout << "Ingrese su tipo de sangre (Ejemplo: A+, O-, AB+, B-): ";
    cin >> tipoSangre;

    // Convertir la combinación de texto a un ID entero para poder usar Switch-Case
    if (tipoSangre == "A+")   opcionID = 1;
    else if (tipoSangre == "A-")  opcionID = 2;
    else if (tipoSangre == "B+")  opcionID = 3;
    else if (tipoSangre == "B-")  opcionID = 4;
    else if (tipoSangre == "AB+") opcionID = 5;
    else if (tipoSangre == "AB-") opcionID = 6;
    else if (tipoSangre == "O+")  opcionID = 7;
    else if (tipoSangre == "O-")  opcionID = 8;

    cout << "\n================ RESULTADO ================" << endl;

    // Evaluación de compatibilidad inmunológica
    switch (opcionID) {
        case 1: // A+
            cout << "Tipo: A Positivo (A+)" << endl;
            cout << "PUEDE RECIBIR DE: A+, A-, O+, O-" << endl;
            cout << "PUEDE DONAR A   : A+, AB+" << endl;
            break;
        case 2: // A-
            cout << "Tipo: A Negativo (A-)" << endl;
            cout << "PUEDE RECIBIR DE: A-, O-" << endl;
            cout << "PUEDE DONAR A   : A+, A-, AB+, AB-" << endl;
            break;
        case 3: // B+
            cout << "Tipo: B Positivo (B+)" << endl;
            cout << "PUEDE RECIBIR DE: B+, B-, O+, O-" << endl;
            cout << "PUEDE DONAR A   : B+, AB+" << endl;
            break;
        case 4: // B-
            cout << "Tipo: B Negativo (B-)" << endl;
            cout << "PUEDE RECIBIR DE: B-, O-" << endl;
            cout << "PUEDE DONAR A   : B+, B-, AB+, AB-" << endl;
            break;
        case 5: // AB+ (Receptor Universal)
            cout << "Tipo: AB Positivo (AB+) [Receptor Universal]" << endl;
            cout << "PUEDE RECIBIR DE: TODOS los tipos de sangre." << endl;
            cout << "PUEDE DONAR A   : Solo AB+" << endl;
            break;
        case 6: // AB-
            cout << "Tipo: AB Negativo (AB-)" << endl;
            cout << "PUEDE RECIBIR DE: A-, B-, AB-, O-" << endl;
            cout << "PUEDE DONAR A   : AB+, AB-" << endl;
            break;
        case 7: // O+
            cout << "Tipo: O Positivo (O+)" << endl;
            cout << "PUEDE RECIBIR DE: O+, O-" << endl;
            cout << "PUEDE DONAR A   : A+, B+, AB+, O+" << endl;
            break;
        case 8: // O- (Donante Universal)
            cout << "Tipo: O Negativo (O-) [Donante Universal]" << endl;
            cout << "PUEDE RECIBIR DE: Solo O-" << endl;
            cout << "PUEDE DONAR A   : TODOS los tipos de sangre." << endl;
            break;
        default:
            cout << "[ERROR] Tipo de sangre no reconocido." << endl;
            cout << "Por favor, verifique que uso mayusculas y el signo correcto (+ o -)." << endl;
            break;
    }

    cout << "===========================================" << endl;

    return 0;
}

