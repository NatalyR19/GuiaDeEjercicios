//94. Validar número de teléfono: Asegurar que siga un formato específico (ej: 8 dígitos, guiones, etc.).504//
#include <iostream>
#include <string>
#include <cctype> // Para isdigit()
using namespace std;

// Función para validar un número de teléfono
bool validarTelefono(const string& telefono) {
    // Verificar longitud (debe ser 12 caracteres: XXX-XXX-XXXX)
    if (telefono.length() != 12) {
        return false;
    }

    // Verificar guiones en las posiciones correctas (índices 3 y 7)
    if (telefono[3] != '-' || telefono[7] != '-') {
        return false;
    }

    // Verificar que los demás caracteres sean dígitos
    for (int i = 0; i < 12; i++) {
        // Saltar los guiones
        if (i == 3 || i == 7) {
            continue;
        }
        // Si no es un dígito, retornar false
        if (!isdigit(telefono[i])) {
            return false;
        }
    }

    // Si pasa todas las validaciones, es correcto
    return true;
}

// Función principal para probar la validación
int main() {
    string telefono;

    cout << "Ingrese un numero de telefono (Formato: XXX-XXX-XXXX): ";
    getline(cin, telefono);

    if (validarTelefono(telefono)) {
        cout << "✅ Numero de telefono VALIDO." << endl;
    } else {
        cout << "❌ Numero de telefono INVALIDO. Use el formato: XXX-XXX-XXXX" << endl;
    }

    return 0;
}