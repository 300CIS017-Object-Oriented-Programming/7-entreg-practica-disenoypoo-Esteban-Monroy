#include "Producto.h"
using std::cout;
using std::string;
using std::cin;

/*
  Constructor del producto.
  Aqui se guardan los datos basicos que el usuario mete.
  Al principio no entendia bien que hacia el : pero ya vi que sirve pa inicializar todo mas rapido.
*/
Producto::Producto(int id, const string& nombre, float precio, int cantidad)
        : id(id), nombre(nombre), precio(precio), cantidad(cantidad) {}

/*
  Esta funcion devuelve el id del producto.
  Es como el numero que lo identifica.
*/
int Producto::getId() const {
    return id;
}

/*
  Devuelve el nombre del producto (lo que el usuario escribio).
*/
const string& Producto::getNombre() const {
    return nombre;
}

/*
  Devuelve el precio del producto (float osea con decimales).
*/
float Producto::getPrecio() const {
    return precio;
}

/*
  Devuelve la cantidad que hay en stock (osea cuantas unidades).
*/
int Producto::getCantidad() const {
    return cantidad;
}

/*
  Esta funcion actualiza el stock, osea resta lo que se vendio.
  Al principio me salia error porque no ponia el if y me quedaba negativo xd.
*/
void Producto::actualizarStock(int vendido) {
    // si la cantidad vendida es menor o igual a lo que hay, entonces se puede vender
    if (vendido <= cantidad && vendido >= 0) {
        cantidad -= vendido; // resto al stock
    } else {
        // si no hay suficiente muestra mensaje
        cout << "No hay stock suficiente para vender " << vendido << " unidades.\n";
    }
}

/*
  Muestra la info del producto en una sola linea, mas ordenado.
  Me costo que no se saltara de linea asi que use el '\n' al final.
*/
void Producto::mostrarInfo() const {
    cout << "ID: " << id
         << " | Producto: " << nombre
         << " | Precio: " << precio
         << " | Stock: " << cantidad << '\n';
}
