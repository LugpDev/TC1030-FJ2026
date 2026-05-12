#ifndef __VAGONPASAJEROS_H__
#define __VAGONPASAJEROS_H__

#include "Vagon.h"

class VagonPasajeros : public Vagon
{
private:
  int num;

public:
  VagonPasajeros(int _num);
  double calcularPeso();
};

#endif // __VAGONPASAJEROS_H__