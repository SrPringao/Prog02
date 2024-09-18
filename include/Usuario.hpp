#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <string>
#include "Libro.hpp"
using namespace std;

class Usuario
{
private:
    string nombre;
    int idUsuario;
    string direccion;
    string telefono;
    string email;
    
    Libro libroPrestado;

public:
     // Constructor vacío
    Usuario();

    // Constructor con nombre e ID
    Usuario(string n, int id);

    // Constructor completo
    Usuario(string n, int id, string dir, string tel, string mail);

    // Getters
    string getNombre() const;
    int getIdUsuario() const;
    string getDireccion() const;
    string getTelefono() const;
    string getEmail() const;
    Libro getLibroPrestado() const;

    // Setters
    void setNombre(const string &n);
    void setIdUsuario(int id);
    void setDireccion(const string &dir);
    void setTelefono(const string &tel);
    void setEmail(const string &mail);
    void setLibroPrestado(const Libro &libro);

    // Método para pedir prestado un libro
    void pedirPrestado(Libro libro);
};

#endif
