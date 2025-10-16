#include "Tienda.h"

Tienda::Tienda() {}

Tienda::~Tienda() {
    for (Producto* p : productos) delete p;
    for (Cliente*  c : clientes)  delete c;
    for (Venta*    v : ventas)    delete v;
    cout << "Memoria liberada correctamente.\n";
}

Producto* Tienda::buscarProductoPorId(int id) {
    for (Producto* p : productos) {
        if (p && p->getId() == id) return p;
    }
    return nullptr;
