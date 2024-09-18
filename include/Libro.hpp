#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>
using namespace std;

class Libro
{
private:
    string titulo;
    string autor;
    string editorial;
    int anioPublicacion;
    string isbn;
    int numPaginas;

public:
    // Constructor vacío
    Libro();

    // Constructor con solo título y autor
    Libro(string t, string a);

    // Constructor completo
    Libro(string t, string a, string e, int anio, string i, int paginas);
    
    // Getters
    string getTitulo() const;
    string getAutor() const;
    string getEditorial() const;
    int getAnioPublicacion() const;
    string getISBN() const;
    int getNumPaginas() const;

    // Setters
    void setTitulo(const string &t);
    void setAutor(const string &a);
    void setEditorial(const string &e);
    void setAnioPublicacion(int anio);
    void setISBN(const string &i);
    void setNumPaginas(int paginas);

    // Método para mostrar información
    void mostrarInfo() const;
};

#endif
