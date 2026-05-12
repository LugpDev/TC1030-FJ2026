#include "VagonCarga.h"

VagonCarga::VagonCarga(double _volumen, double _pesom3)
{
  volumen = _volumen;
  pesom3 = _pesom3;
}

double VagonCarga::calcularPeso()
{
  peso = pesom3 * volumen;
  return peso;
}
