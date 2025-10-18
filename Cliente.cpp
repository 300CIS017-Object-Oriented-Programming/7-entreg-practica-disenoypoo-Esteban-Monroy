#include "Cliente.h"
using std::cout;
using std::string;
using std::cin;

/*
  Constructor del cliente.
  Aqui se guardan el nombre y la cedula.
  Al principio no entendia muy bien para que servia el : nombre(nombre)
  pero despues vi que asi se inicializan las variables mas facil.
*/
Cliente::Cliente(const string& nombre, const string& cedula)
        : nombre(nombre), cedula(cedula) {}

/*
  Devuelve el nombre del cliente.
  Es de tipo string, y lleva const para no cambiar el valor.
*/
const string& Cliente::getNombre() const {
    return nombre;
}

/*
  Devuelve la cedula del cliente (osea el id personal).
*/
const string& Cliente::getCedula() const {
    return cedula;
}

/*
  Muestra la informacion del cliente en una sola linea.
  Uso el cout para imprimir los datos. Me parecio mas facil asi.
*/
void Cliente::mostrarInfo() const {
    cout << "Cliente: " << nombre
         << " | Cedula: " << cedula << '\n';
}
