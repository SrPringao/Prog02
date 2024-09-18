#include "Biblioteca.hpp"
#include <iostream>

Biblioteca::Biblioteca() : nombre(""), direccion(""), telefono(""), horario(""), capacidad(0) {}

Biblioteca::Biblioteca(string n, string dir, string tel, string hor, int cap)
    : nombre(n), direccion(dir), telefono(tel), horario(hor), capacidad(cap) {}

Biblioteca::Biblioteca(string n, string dir) : nombre(n), direccion(dir), telefono(""), horario(""), capacidad(0) {}

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
