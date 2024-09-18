#include "Usuario.hpp"
#include <iostream>

Usuario::Usuario(string n, int id, string dir, string tel, string mail)
    : nombre(n), idUsuario(id), direccion(dir), telefono(tel), email(mail), libroPrestado("", "", "", 0, "", 0) {}

Usuario::Usuario(string n, int id) : nombre(n), idUsuario(id), direccion(""), telefono(""), email(""), libroPrestado("", "", "", 0, "", 0) {}

Usuario::Usuario() : nombre(""), idUsuario(0), direccion(""), telefono(""), email(""), libroPrestado("", "", "", 0, "", 0) {}

string Usuario::getNombre() const { return nombre; }
int Usuario::getIdUsuario() const { return idUsuario; }
string Usuario::getDireccion() const { return direccion; }
string Usuario::getTelefono() const { return telefono; }
string Usuario::getEmail() const { return email; }
Libro Usuario::getLibroPrestado() const { return libroPrestado; }

void Usuario::setNombre(const string &n) { nombre = n; }
void Usuario::setIdUsuario(int id) { idUsuario = id; }
void Usuario::setDireccion(const string &dir) { direccion = dir; }
void Usuario::setTelefono(const string &tel) { telefono = tel; }
void Usuario::setEmail(const string &mail) { email = mail; }
void Usuario::setLibroPrestado(const Libro &libro) { libroPrestado = libro; }

void Usuario::pedirPrestado(Libro libro)
{
    libroPrestado = libro;
    cout << nombre << " ha solicitado el libro: " << libro.getTitulo() << "\n";
}
