#ifndef BEBIDA_H
#define BEBIDA_H

#include "Producto.h"

class Bebida : public Producto {
private:
  double volumen; // en litros
  double caloriasPorLitro;
  bool esRefill;

public:
  Bebida(string _nombre, double _volumen, double _caloriasPorLitro,
         bool _esRefill);
  double getPrecio();
  double getContenidoCalorico();
};

#endif
