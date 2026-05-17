#include "Producto.h"

Producto::Producto(string _nombre) {
  nombre = _nombre;
  precio = 0;
}

string Producto::getNombre() { return nombre; }

bool Producto::operator<(Producto &otro) { return precio < otro.precio; }
bool Producto::operator>(Producto &otro) { return precio > otro.precio; }
