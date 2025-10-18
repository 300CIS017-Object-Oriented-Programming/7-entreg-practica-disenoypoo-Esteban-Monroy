#include "Tienda.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

// constructor
Tienda::Tienda() {}

// destructor
Tienda::~Tienda() {
    for (Producto* p : productos) delete p;
    for (Cliente* c : clientes) delete c;
    for (Venta* v : ventas) delete v;
}

// buscar producto por id
Producto* Tienda::buscarProductoPorId(int id) {
    for (Producto* p : productos)
        if (p && p->getId() == id) return p;
    return nullptr;
}

// buscar cliente por cedula
Cliente* Tienda::buscarClientePorCedula(const string& cedula) {
    for (Cliente* c : clientes)
        if (c && c->getCedula() == cedula) return c;
    return nullptr;
}

// agregar producto
void Tienda::agregarProducto() {
    int id, cantidad;
    float precio;
    string nombre;

    cout << "== Agregar Producto ==\n";
    cout << "id: "; cin >> id;
    cin.ignore();
    cout << "nombre: "; getline(cin, nombre);
    cout << "precio: "; cin >> precio;
    cout << "cantidad: "; cin >> cantidad;

    if (buscarProductoPorId(id)) {
        cout << "ya existe\n";
        return;
    }

    productos.push_back(new Producto(id, nombre, precio, cantidad));
    cout << "producto agregado\n";
}

// agregar cliente
void Tienda::agregarCliente() {
    string nombre, cedula;
    cout << "== Agregar Cliente ==\n";
    cin.ignore();
    cout << "nombre: "; getline(cin, nombre);
    cout << "cedula: "; getline(cin, cedula);

    if (buscarClientePorCedula(cedula)) {
        cout << "ya existe\n";
        return;
    }

    clientes.push_back(new Cliente(nombre, cedula));
    cout << "cliente agregado\n";
}

// registrar venta
void Tienda::registrarVenta() {
    string cedula;
    cout << "== Registrar Venta ==\n";
    cin.ignore();
    cout << "cedula: "; getline(cin, cedula);
    Cliente* cli = buscarClientePorCedula(cedula);
    if (!cli) { cout << "no existe cliente\n"; return; }

    int idProd;
    cout << "id producto: "; cin >> idProd;
    Producto* prod = buscarProductoPorId(idProd);
    if (!prod) { cout << "no existe producto\n"; return; }

    int cant;
    cout << "cantidad: "; cin >> cant;
    if (cant <= 0 || cant > prod->getCantidad()) {
        cout << "cantidad invalida\n"; return;
    }

    prod->actualizarStock(cant);
    ventas.push_back(new Venta(cli, prod, cant));
    cout << "venta registrada\n";
}

// mostrar productos
void Tienda::mostrarInventario() const {
    cout << "== Inventario ==\n";
    if (productos.empty()) { cout << "no hay\n"; return; }
    for (auto p : productos) if (p) p->mostrarInfo();
}

// mostrar ventas
void Tienda::mostrarVentas() const {
    cout << "== Ventas ==\n";
    if (ventas.empty()) { cout << "no hay\n"; return; }
    for (auto v : ventas) if (v) v->mostrarInfo();
}

// mostrar clientes
void Tienda::mostrarClientes() const {
    cout << "== Clientes ==\n";
    if (clientes.empty()) { cout << "no hay\n"; return; }
    for (auto c : clientes) if (c) c->mostrarInfo();
}
