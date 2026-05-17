#include "Hamburguesa.h"

Hamburguesa::Hamburguesa(string _nombre, int _numCarne, int _numQueso,
                         bool _tieneTocino)
    : Producto(_nombre) {
  numCarne = _numCarne;
  numQueso = _numQueso;
  tieneTocino = _tieneTocino;
}

double Hamburguesa::getPrecio() {
  double precioBase = 70;

  precioBase += numCarne * 50;
  precioBase += numQueso * 20;

  if (tieneTocino) {
    precioBase += 30;
  }

  precio = precioBase;

  return precio;
}

double Hamburguesa::getContenidoCalorico() {
  double caloriasBase = 200;

  caloriasBase += numCarne * 250;
  caloriasBase += numQueso * 100;

  if (tieneTocino) {
    caloriasBase += 150;
  }

  contenidoCalorico = caloriasBase;

  return contenidoCalorico;
}
