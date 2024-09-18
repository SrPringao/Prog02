#include <iostream>
#include "Biblioteca.hpp"
#include "Usuario.hpp"

int main()
{
    Biblioteca biblioteca("Biblioteca Central", "Calle Falsa 123", "123-4567", "9:00-18:00", 500);

    // Agregar libros
    biblioteca.agregarLibro(Libro("1984", "George Orwell", "Editorial X", 1949, "123456789", 328));
    biblioteca.agregarLibro(Libro("Cien años de soledad", "Gabriel Garcia Marquez", "Editorial Y", 1967, "987654321", 417));

    Usuario usuario("Carlos", 1, "Av. Siempre Viva", "555-1234", "carlos@mail.com");

    // Mostrar libros
    biblioteca.mostrarLibros();

    // Usuario pide prestado un libro
    usuario.pedirPrestado(biblioteca.obtenerLibro(1));

    return 0;
}
