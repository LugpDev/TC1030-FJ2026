#ifndef __VAGONPASAJEROS_H__
#define __VAGONPASAJEROS_H__

#include "Vagon.h"

class VagonPasajeros : public Vagon {
private:
  int cupo;
  int reservados;

public:
  VagonPasajeros(int _num);
  double calcularPeso();
  void mostrar(std::ostream &os);
  int disponibles();
  void reservar(int _asientos);
};

#endif // __VAGONPASAJEROS_H__
