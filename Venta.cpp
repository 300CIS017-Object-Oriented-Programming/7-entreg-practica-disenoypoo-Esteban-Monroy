#include "Venta.h"
using std::cout;
using std::string;
using std::cin;

/*
  Constructor de la clase Venta.
  Aqui se guarda el cliente, el producto, y la cantidad que compro.
  Tambien se inicializa el total en 0.0 porque despues se calcula bien.
  Al principio no sabia que se podia poner los dos puntos esos (:) para asignar valores,
  pero ya entendi que es como una forma rapida de inicializar todo.
*/
Venta::Venta(Cliente* c, Producto* p, int cantidad)
        : cliente(c), producto(p), cantidad(cantidad), total(0.0f) {
    calcularTotal(); // llama a la funcion que calcula el total
}

/*
  Devuelve el cliente asociado a la venta.
  Osea quien fue la persona que compro algo.
*/
Cliente* Venta::getCliente() const {
    return cliente;
}

/*
  Devuelve el producto que se vendio.
*/
Producto* Venta::getProducto() const {
    return producto;
}

/*
  Devuelve la cantidad de productos que se vendieron.
*/
int Venta::getCantidad() const {
    return cantidad;
}

/*
  Devuelve el total de la venta (precio por cantidad).
*/
float Venta::getTotal() const {
    return total;
}

/*
  Calcula el total multiplicando el precio del producto por la cantidad.
  Al inicio me daba error porque no puse el if del producto nulo y se cerraba el programa xd.
  Por eso puse el if (producto != nullptr).
*/
void Venta::calcularTotal() {
    if (producto != nullptr) {
        total = producto->getPrecio() * cantidad;
    } else {
        total = 0.0f; // si no hay producto el total queda en 0
    }
}

/*
  Muestra la informacion de la venta toda en una sola linea.
  Uso el operador ? : porque me parecio curioso y lo vi en un video jaja,
  sirve para mostrar N/A si el cliente o producto es nulo.
*/
void Venta::mostrarInfo() const {
    cout << "Venta -> Cliente: " << (cliente ? cliente->getNombre() : "N/A")
         << " | Producto: " << (producto ? producto->getNombre() : "N/A")
         << " | Cantidad: " << cantidad
         << " | Total: " << total << '\n';
}
