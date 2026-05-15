#ifndef __VAGONCARGA_H__
#define __VAGONCARGA_H__

#include "Vagon.h"

class VagonCarga : public Vagon {
private:
  double pesom3;
  double volumen;

public:
  VagonCarga(double _volumen, double _pesom3);
  double calcularPeso();
  void mostrar(std::ostream &os);
};

#endif // __VAGONCARGA_H__
