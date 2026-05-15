#ifndef __VAGONPASAJEROS_H__
#define __VAGONPASAJEROS_H__

#include "Vagon.h"

class VagonPasajeros : public Vagon {
private:
  int num;

public:
  VagonPasajeros(int _num);
  double calcularPeso();
  void mostrar(std::ostream &os);
};

#endif // __VAGONPASAJEROS_H__
