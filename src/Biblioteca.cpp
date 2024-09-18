#include "Biblioteca.hpp"
#include <iostream>

Biblioteca::Biblioteca(){

}
Biblioteca::Biblioteca(string nombre, string direccion) {
    this->nombre = nombre;
    this->direccion = direccion;
}


Biblioteca::Biblioteca(string nombre, string direccion, string telefono, string horario, int capacidad){
    this->nombre = nombre;
    this->direccion = direccion;
    this->telefono = telefono;
    this->horario = horario;
    this->capacidad = capacidad;
}


string Biblioteca::getNombre() const { return nombre; }
string Biblioteca::getDireccion() const { return direccion; }
string Biblioteca::getTelefono() const { return telefono; }
string Biblioteca::getHorario() const { return horario; }
int Biblioteca::getCapacidad() const { return capacidad; }

void Biblioteca::setNombre(const string &n) { nombre = n; }
void Biblioteca::setDireccion(const string &dir) { direccion = dir; }
void Biblioteca::setTelefono(const string &tel) { telefono = tel; }
void Biblioteca::setHorario(const string &hor) { horario = hor; }
void Biblioteca::setCapacidad(int cap) { capacidad = cap; }

void Biblioteca::agregarLibro(const Libro &libro)
{
    libros.push_back(libro);
}

void Biblioteca::mostrarLibros() const
{
    cout << "Libros disponibles en la biblioteca:\n";
    for (const auto &libro : libros)
    {
        libro.mostrarInfo();
    }
}

Libro Biblioteca::obtenerLibro(int index) const
{
    return libros[index];
}

void Biblioteca::registrarUsuario(const Usuario &usuario)
{
    usuariosRegistrados.push_back(usuario);
}

void Biblioteca::getUsuariosRegistrados()
{
    cout << "Usuarios registrados en la biblioteca:\n";
    for (const auto &usuario : usuariosRegistrados)
    {
        cout << "Nombre: " << usuario.getNombre() << ", ID: " << usuario.getIdUsuario() << "\n";
    }
}
