#include "Bebida.h"

Bebida::Bebida(string _nombre, double _volumen, double _caloriasPorLitro,
               bool _esRefill)
    : Producto(_nombre) {
  volumen = _volumen;
  caloriasPorLitro = _caloriasPorLitro;
  esRefill = _esRefill;
}

double Bebida::getPrecio() {
  double precioBase = 0;

  if (esRefill) {
    precioBase += 30;
  } else {
    precioBase += 10;
  }

  if (volumen >= 0.7) {
    precioBase += 20;
  } else if (volumen >= 0.5) {
    precioBase += 15;
  } else {
    precioBase += 10;
  }

  precio = precioBase;

  return precio;
}

double Bebida::getContenidoCalorico() {
  contenidoCalorico = volumen * caloriasPorLitro;
  return contenidoCalorico;
}
