#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>
using std::cout;
using std::string;
using std::cin;

/*
  Clase Cliente:
  Esta clase guarda los datos basicos de una persona que compra algo en la tienda.
  Solo tiene nombre y cedula porque por ahora no se necesita mas.
  Al principio me confundia entre clase y struct, pero ya entendi que la clase
  tiene partes privadas y publicas, y eso se llama encapsulamiento (creo asi era).
*/
class Cliente {
private:
    string nombre;  // nombre completo del cliente
    string cedula;  // numero de identificacion (lo que se pide en ventas)

public:
    /*
      Constructor del cliente.
      Sirve para crear el objeto con los datos que mete el usuario.
      Osea, cuando hago new Cliente("Sara", "123") se guarda aqui.
    */
    Cliente(const string& nombre, const string& cedula);

    /*
      Getters:
      Son funciones que devuelven los datos, no los cambian.
      Use const porque mi profe dijo que asi no se pueden modificar.
    */
    const string& getNombre() const;  // devuelve el nombre
    const string& getCedula() const;  // devuelve la cedula

    /*
      Mostrar Info:
      Muestra el nombre y la cedula del cliente.
      Uso cout para imprimirlo todo en una sola linea.
    */
    void mostrarInfo() const;
};

#endif
