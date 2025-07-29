#include <iostream>
using namespace std;
// Función de la conversion Celsius a Fahrenheit
float convertirACelsius(float gradosCelsius) {
    return (gradosCelsius * 9.0 / 5.0) + 32.0;
}
int main() {
    float CELSIUS, FAHRENHEIT;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> CELSIUS;
    FAHRENHEIT = convertirACelsius(CELSIUS);
    cout << "La temperatura en Fahrenheit es: " << FAHRENHEIT << "°F" << endl;
    return 0;
}

