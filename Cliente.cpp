#include "Cliente.h"

Cliente::Cliente(const string& nombre, const string& cedula)
        : nombre(nombre), cedula(cedula) {}

const string& Cliente::getNombre() const { return nombre; }
const string& Cliente::getCedula() const { return cedula; }

void Cliente::mostrarInfo() const {
    cout << "Cliente: " << nombre << " | Cedula: " << cedula << '\n';
}
