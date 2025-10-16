#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>
using namespace std;

class Producto {
private:
    int id;
    string nombre;
    float precio;
    int cantidad; // stock

public:
    Producto(int id, const string& nombre, float precio, int cantidad);

    // getters
    int getId() const;
    const string& getNombre() const;
    float getPrecio() const;
    int getCantidad() const;

    // operaciones
    void actualizarStock(int vendido); // descuenta del stock si hay suficiente
    void mostrarInfo() const;
};

#endif
