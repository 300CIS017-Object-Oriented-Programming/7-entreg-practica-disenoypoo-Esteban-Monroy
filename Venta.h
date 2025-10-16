#ifndef VENTA_H
#define VENTA_H

#include <iostream>
#include "Cliente.h"
#include "Producto.h"
using namespace std;

// Venta simple: un cliente compra UN solo producto (para version basica)
class Venta {
private:
    Cliente* cliente;
    Producto* producto;
    int cantidad;
    float total;

public:
    Venta(Cliente* c, Producto* p, int cantidad);

    Cliente* getCliente() const;
    Producto* getProducto() const;
    int getCantidad() const;
    float getTotal() const;

    void calcularTotal(); // precio * cantidad
    void mostrarInfo() const;
};

#endif
