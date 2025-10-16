#include "Producto.h"

Producto::Producto(int id, const string& nombre, float precio, int cantidad)
        : id(id), nombre(nombre), precio(precio), cantidad(cantidad) {}

int Producto::getId() const { return id; }
const string& Producto::getNombre() const { return nombre; }
float Producto::getPrecio() const { return precio; }
int  Producto::getCantidad() const { return cantidad; }

void Producto::actualizarStock(int vendido) {
    if (vendido <= cantidad && vendido >= 0) {
        cantidad -= vendido;
    } else {
        cout << "No hay stock suficiente para vender " << vendido << " unidades.\n";
    }
}

void Producto::mostrarInfo() const {
    cout << "ID: " << id
         << " | Producto: " << nombre
         << " | Precio: " << precio
         << " | Stock: " << cantidad << '\n';
}
