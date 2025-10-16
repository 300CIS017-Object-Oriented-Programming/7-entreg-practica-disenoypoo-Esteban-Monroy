#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>
using namespace std;

class Cliente {
private:
    string nombre;
    string cedula;

public:
    Cliente(const string& nombre, const string& cedula);

    const string& getNombre() const;
    const string& getCedula() const;

    void mostrarInfo() const;
};

#endif
