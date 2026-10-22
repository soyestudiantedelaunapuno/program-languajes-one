#include <iostream>

using namespace std;

int main() {
    double glucosa;
    int categoria = 0;

    cout << "=== Sistema de Clasificacion de Glucosa (Switch-Case) ===" << endl;
    cout << "Ingrese el nivel de glucosa en sangre (mg/dL): ";
    cin >> glucosa;

    // Validación de errores
    if (glucosa <= 0) {
        cout << "\n[ERROR] El valor debe ser mayor a 0." << endl;
        return 1;
    }

    // Asignamos un ID entero para cada rango médico de la ADA
    if (glucosa < 70) {
        categoria = 1; // Hipoglucemia
    } else if (glucosa >= 70 && glucosa <= 99) {
        categoria = 2; // Normal
    } else if (glucosa >= 100 && glucosa <= 125) {
        categoria = 3; // Prediabetes
    } else {
        categoria = 4; // Diabetes
    }

    cout << "\n================ RESULTADO ================" << endl;

    // Evaluación mediante estructura Switch-Case
    switch (categoria) {
        case 1:
            cout << "Estado: HIPOGLUCEMIA (Nivel bajo de azucar)" << endl;
            cout << "Nota: Requiere atencion inmediata para elevar los niveles." << endl;
            break;
            
        case 2:
            cout << "Estado: NORMAL" << endl;
            cout << "Nota: Sus niveles en ayunas se encuentran en el rango saludable." << endl;
            break;
            
        case 3:
            cout << "Estado: PREDIABETES" << endl;
            cout << "Nota: Niveles mas altos de lo normal. Se sugieren cambios en dieta y ejercicio." << endl;
            break;
            
        case 4:
            cout << "Estado: DIABETES" << endl;
            cout << "Nota: Rango compatible con diabetes. Consulte a su medico para confirmacion." << endl;
            break;
            
        default:
            cout << "Error inesperado en el sistema." << endl;
            break;
    }

    cout << "===========================================" << endl;

    return 0;
}

