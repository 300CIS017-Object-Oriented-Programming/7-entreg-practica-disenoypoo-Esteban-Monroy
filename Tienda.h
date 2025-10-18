#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include <string>
#include <iostream>
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"
using std::cout;
using std::string;
using std::cin;
using std::vector;

/*
  Clase Tienda:
  Esta clase maneja todo el sistema, osea controla los productos, los clientes y las ventas.
  Aqui se guardan los vectores con los datos y se hacen las funciones para agregar y mostrar.
  Me costo un poco entender los vectores con punteros, pero ya vi que sirven pa guardar varios objetos.
*/
class Tienda {
private:
    vector<Producto*> productos; // lista de todos los productos
    vector<Cliente*>  clientes;  // lista de clientes registrados
    vector<Venta*>    ventas;    // lista de las ventas hechas

    /*
      Funciones privadas que ayudan a buscar por id o por cedula.
      Osea sirven para no repetir tanto codigo al buscar dentro del vector.
    */
    Producto* buscarProductoPorId(int id);
    Cliente*  buscarClientePorCedula(const string& cedula);

public:
    /*
      Constructor y destructor:
      El constructor inicia la tienda vacia.
      El destructor libera la memoria de los objetos creados con new.
      (Esto lo hice porque mi profe dijo que si no se borra hay fugas de memoria xd)
    */
    Tienda();
    ~Tienda();

    /*
      Altas: son las funciones que permiten agregar cosas nuevas.
      agregarProducto() -> pide los datos de un producto y lo guarda.
      agregarCliente() -> lo mismo pero para los clientes.
    */
    void agregarProducto();
    void agregarCliente();

    /*
      Ventas:
      Aqui se registra una venta nueva, osea se elige un cliente y un producto
      y se calcula el total. Tambien se descuenta del stock.
    */
    void registrarVenta();

    /*
      Reportes:
      Estas funciones sirven para mostrar lo que ya esta guardado.
      mostrarInventario() -> muestra todos los productos.
      mostrarVentas() -> muestra todas las ventas hechas.
      mostrarClientes() -> lista los clientes.
    */
    void mostrarInventario() const;
    void mostrarVentas() const;
    void mostrarClientes() const;
};

#endif
