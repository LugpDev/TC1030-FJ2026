#include "VagonPasajeros.h"

VagonPasajeros::VagonPasajeros(int _num)
{
  num = _num;
}

double VagonPasajeros::calcularPeso()
{
  peso = num * 70.0;
  return peso;
}
