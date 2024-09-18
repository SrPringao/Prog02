#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>
#include "Libro.hpp"
#include "Usuario.hpp"

using namespace std;

class Biblioteca {
private:
    vector<Libro> libros;
    vector<Usuario> usuariosRegistrados;

    
    string nombre;
    string direccion;
    string telefono;
    string horario;
    int capacidad;

public:
    // Constructor vacío
    Biblioteca();

    // Constructor con nombre y dirección
    Biblioteca(string n, string dir);

    // Constructor completo
    Biblioteca(string n, string dir, string tel, string hor, int cap);


    // Getters
    string getNombre() const;
    string getDireccion() const;
    string getTelefono() const;
    string getHorario() const;
    int getCapacidad() const;

    // Setters
    void setNombre(const string& n);
    void setDireccion(const string& dir);
    void setTelefono(const string& tel);
    void setHorario(const string& hor);
    void setCapacidad(int cap);

    void getUsuariosRegistrados();

    // Métodos
    void agregarLibro(const Libro& libro);
    void mostrarLibros() const;
    Libro obtenerLibro(int index) const;
    void registrarUsuario(const Usuario& usuario);
};

#endif
