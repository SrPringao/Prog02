#include "Libro.hpp"
#include <iostream>

Libro::Libro(){

}

Libro::Libro(string titulo, string autor){
    this->titulo = titulo;
    this->autor = autor;
}

Libro::Libro(string titulo, string autor, string editorial, int anioPublicacion, string isbn, int numPaginas) {
    this->titulo = titulo;
    this->autor = autor;
    this->editorial = editorial;
    this->anioPublicacion = anioPublicacion;
    this->isbn = isbn;
    this->numPaginas = numPaginas;
}
  



string Libro::getTitulo() const { return titulo; }
string Libro::getAutor() const { return autor; }
string Libro::getEditorial() const { return editorial; }
int Libro::getAnioPublicacion() const { return anioPublicacion; }
string Libro::getISBN() const { return isbn; }
int Libro::getNumPaginas() const { return numPaginas; }

void Libro::setTitulo(const string &t) { titulo = t; }
void Libro::setAutor(const string &a) { autor = a; }
void Libro::setEditorial(const string &e) { editorial = e; }
void Libro::setAnioPublicacion(int anio) { anioPublicacion = anio; }
void Libro::setISBN(const string &i) { isbn = i; }
void Libro::setNumPaginas(int paginas) { numPaginas = paginas; }

void Libro::mostrarInfo() const
{
    cout << "Titulo: " << titulo << ", Autor: " << autor
         << ", Editorial: " << editorial << ", Año: " << anioPublicacion
         << ", ISBN: " << isbn << ", Páginas: " << numPaginas << "\n";
}
