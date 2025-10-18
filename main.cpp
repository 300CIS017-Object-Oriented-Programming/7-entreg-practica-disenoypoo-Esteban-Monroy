#include <iostream>
#include "Tienda.h"
using std::cout;

// menú basico para usar la tienda
void menu() {
    cout << "\n=== MENU TIENDA ===\n";
    cout << "1. Agregar producto\n";
    cout << "2. Agregar cliente\n";
    cout << "3. Registrar venta\n";
    cout << "4. Ver productos\n";
    cout << "5. Ver clientes\n";
    cout << "6. Ver ventas\n";
    cout << "0. Salir\n";
    cout << "Opcion: ";
}

int main() {
    Tienda t;  // creo la tienda
    int op = -1;

    // bucle para que el menu se repita hasta que se ponga 0
    do {
        menu();
        cin >> op;

        if (op == 1) t.agregarProducto();
        else if (op == 2) t.agregarCliente();
        else if (op == 3) t.registrarVenta();
        else if (op == 4) t.mostrarInventario();
        else if (op == 5) t.mostrarClientes();
        else if (op == 6) t.mostrarVentas();
        else if (op == 0) cout << "Saliendo...\n";
        else cout << "Opcion no valida\n";

    } while (op != 0); // mientras no sea 0 repite el menu

    return 0;
}
