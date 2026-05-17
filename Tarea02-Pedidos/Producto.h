#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

using namespace std;

class Producto {
protected:
  string nombre;
  double precio;
  double contenidoCalorico;

public:
  Producto(string _nombre);
  string getNombre();
  virtual double getPrecio() = 0;
  virtual double getContenidoCalorico() = 0;
  bool operator<(Producto &otro);
  bool operator>(Producto &otro);
};

#endif
