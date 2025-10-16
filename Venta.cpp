#include "Venta.h"

Venta::Venta(Cliente* c, Producto* p, int cantidad)
        : cliente(c), producto(p), cantidad(cantidad), total(0.0f) {
    calcularTotal();
}

Cliente* Venta::getCliente() const { return cliente; }
Producto* Venta::getProducto() const { return producto; }
int Venta::getCantidad() const { return cantidad; }
float Venta::getTotal() const { return total; }

void Venta::calcularTotal() {
    if (producto != nullptr) {
        total = producto->getPrecio() * cantidad;
    } else {
        total = 0.0f;
    }
}

void Venta::mostrarInfo() const {
    cout << "Venta -> Cliente: " << (cliente ? cliente->getNombre() : "N/A")
         << " | Producto: " << (producto ? producto->getNombre() : "N/A")
         << " | Cantidad: " << cantidad
         << " | Total: " << total << '\n';
}
