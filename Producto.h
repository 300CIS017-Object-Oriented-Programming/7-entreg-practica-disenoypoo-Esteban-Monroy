#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>
using std::cout;
using std::string;
using std::cin;

/*
  Clase Producto:
  Aqui se guarda la informacion de cada producto de la tienda.
  Esta clase la entendi como la base, osea lo que se vende.
  Tiene cosas basicas como id, nombre, precio y la cantidad que hay en stock.
*/
class Producto {
private:
    int id;          // numero del producto
    string nombre;   // nombre del producto (por ejemplo "jabón ecológico")
    float precio;    // el valor en pesos (puede tener decimales)
    int cantidad;    // stock osea cuantas unidades hay disponibles

public:
    /*
      Constructor del producto.
      Me costo entender que es un constructor pero basicamente se usa
      cuando se crea el objeto, osea ahi se guardan los datos que uno mete.
    */
    Producto(int id, const string& nombre, float precio, int cantidad);

    /*
      Getters:
      Son funciones que devuelven los datos del producto.
      Mi profe dijo que es mejor no acceder directo a las variables privadas,
      por eso se usan estas funciones.
    */
    int getId() const;           // devuelve el id
    const string& getNombre() const;  // devuelve el nombre
    float getPrecio() const;     // devuelve el precio
    int getCantidad() const;     // devuelve la cantidad o stock

    /*
      Operaciones principales del producto.
      actualizarStock: sirve pa restar cuando se vende algo.
      mostrarInfo: imprime los datos del producto por pantalla.
    */
    void actualizarStock(int vendido); // descuenta del stock si hay suficiente
    void mostrarInfo() const;          // muestra toda la info ordenada
};

#endif
