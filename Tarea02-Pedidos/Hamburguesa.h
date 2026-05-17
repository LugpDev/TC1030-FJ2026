#ifndef HAMBURGUESA_H
#define HAMBURGUESA_H

#include "Producto.h"

class Hamburguesa : public Producto {
private:
  int numCarne;
  int numQueso;
  bool tieneTocino;

public:
  Hamburguesa(string _nombre, int _numCarne, int _numQueso, bool _tieneTocino);
  double getPrecio();
  double getContenidoCalorico();
};

#endif
