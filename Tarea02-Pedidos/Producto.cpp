#include "Producto.h"

Producto::Producto(string _nombre) {
  nombre = _nombre;
  precio = 0;
  contenidoCalorico = 0;
}

string Producto::getNombre() { return nombre; }

bool Producto::operator<(Producto &otro) { return getContenidoCalorico() < otro.getContenidoCalorico(); }
bool Producto::operator>(Producto &otro) { return getContenidoCalorico() > otro.getContenidoCalorico(); }
