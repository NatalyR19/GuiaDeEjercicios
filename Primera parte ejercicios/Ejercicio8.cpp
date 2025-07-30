#include <iostream>
using namespace std;
int main() {
    float usd;
    float hnl = 0;
    float tasa = 24.68;

    cout << "Ingrese la cantidad en dolares: ";
    cin >> usd;
    if (usd < 0) {
        cout << "Error: La cantidad no puede ser negativa." << endl;
        return -1; // Valor de error

    }if (hnl != -1) {
        hnl = tasa * usd;
        cout << usd << " USD = " << hnl << " HNL" << endl;
    }

    return 0;
}
