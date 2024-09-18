#include "Usuario.hpp"
#include <iostream>

Usuario::Usuario(){

}
    

Usuario::Usuario(string nombre, int idUsuario) {
    this->nombre = nombre;
    this->idUsuario = idUsuario;
}

Usuario::Usuario(string nombre, int idUsuario, string direccion, string telefono, string email){
    this->nombre = nombre;
    this->idUsuario = idUsuario;
    this->direccion = direccion;
    this->telefono = telefono;
    this->email = email;

}

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
