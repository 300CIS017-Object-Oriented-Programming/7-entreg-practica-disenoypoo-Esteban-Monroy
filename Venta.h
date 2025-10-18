#ifndef VENTA_H
#define VENTA_H

#include <iostream>
#include "Cliente.h"
#include "Producto.h"
using  std::cout;
using std::string;
using std::cin;

/*
  Clase Venta:
  Esta clase representa una venta basica, osea cuando un cliente compra un solo producto.
  Aqui se guarda quien compro (cliente), que producto fue, cuantas unidades y cuanto dio el total.
  Al principio me confundia con punteros, pero ya entendi que con el * se puede
  guardar la direccion de memoria del objeto sin copiarlo todo.
*/
class Venta {
private:
    Cliente* cliente;   // puntero al cliente que hace la compra
    Producto* producto; // puntero al producto que se vendio
    int cantidad;       // cuantas unidades se compraron
    float total;        // valor total de la venta

public:
    /*
      Constructor de la venta.
      Se le pasa el cliente, el producto y la cantidad.
      El total despues se calcula multiplicando precio por cantidad.
    */
    Venta(Cliente* c, Producto* p, int cantidad);

    /*
      Getters (funciones que devuelven datos sin modificarlos)
      Devuelven los valores de cada atributo, osea el cliente, el producto, etc.
      Use const para no cambiar nada por accidente.
    */
    Cliente* getCliente() const;
    Producto* getProducto() const;
    int getCantidad() const;
    float getTotal() const;

    /*
      Calcular Total:
      Multiplica el precio del producto por la cantidad vendida.
      Mostrar Info:
      Imprime los datos de la venta por pantalla (cliente, producto, cantidad, total).
    */
    void calcularTotal();  // precio * cantidad
    void mostrarInfo() const;
};

#endif
