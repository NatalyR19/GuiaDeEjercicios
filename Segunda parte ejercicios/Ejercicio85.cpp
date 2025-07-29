#include <iostream> // Para entrada/salida (como std::cout)
#include <iomanip>  // Para formatear la salida (como std::fixed y std::setprecision)

// Definición de la clase CuentaBancaria
class CuentaBancaria {
private:
    // Atributo privado
    double saldo;

public:
    // Constructor que recibe el saldo inicial
    CuentaBancaria(double saldoInicial) {
        if (saldoInicial >= 0) {
            saldo = saldoInicial;
        } else {
            std::cout << "Advertencia: El saldo inicial no puede ser negativo. Se establecerá en 0." << std::endl;
            saldo = 0;
        }
    }

    // Método para depositar dinero
    void depositar(double cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
            std::cout << "Depósito exitoso de $" << std::fixed << std::setprecision(2) << cantidad << "." << std::endl;
        } else {
            std::cout << "Error: La cantidad a depositar debe ser positiva." << std::endl;
        }
    }

    // Método para retirar dinero (verificando fondos suficientes)
    void retirar(double cantidad) {
        if (cantidad > 0) {
            if (saldo >= cantidad) {
                saldo -= cantidad;
                std::cout << "Retiro exitoso de $" << std::fixed << std::setprecision(2) << cantidad << "." << std::endl;
            } else {
                std::cout << "Error: Fondos insuficientes para retirar $" << std::fixed << std::setprecision(2) << cantidad << "." << std::endl;
            }
        } else {
            std::cout << "Error: La cantidad a retirar debe ser positiva." << std::endl;
        }
    }

    // Método para consultar el saldo actual
    void consultarSaldo() {
        std::cout << "Saldo actual: $" << std::fixed << std::setprecision(2) << saldo << "." << std::endl;
    }
};

int main() {
    // Crear una cuenta con un saldo inicial de $1000.00
    CuentaBancaria miCuenta(1000.00);
    std::cout << "Cuenta bancaria creada con saldo inicial de $1000.00" << std::endl;
    miCuenta.consultarSaldo(); // Muestra el saldo inicial

    std::cout << "\n--- Operaciones ---" << std::endl;

    // Realizar una operación de depósito
    miCuenta.depositar(500.75);
    miCuenta.consultarSaldo();

    // Realizar una operación de retiro (con fondos suficientes)
    miCuenta.retirar(200.50);
    miCuenta.consultarSaldo();

    // Intentar una operación de retiro (sin fondos suficientes)
    miCuenta.retirar(1500.00); // Esto debería fallar
    miCuenta.consultarSaldo();

    // Realizar otra operación de retiro exitosa
    miCuenta.retirar(300.00);
    miCuenta.consultarSaldo();

    return 0; // Indica que el programa terminó correctamente
}