#include "VagonCarga.h"

VagonCarga::VagonCarga(double _volumen, double _pesom3) {
  volumen = _volumen;
  pesom3 = _pesom3;
}

double VagonCarga::calcularPeso() {
  peso = pesom3 * volumen;
  return peso;
}

void VagonCarga::mostrar(std::ostream &os) {
  os << "Vagon de carga" << std::endl
     << "Volumen de carga: " << volumen << "m3" << std::endl
     << "Peso: " << calcularPeso() << std::endl;
}

void VagonCarga::cargar(double _carga) { volumen += _carga; };

void VagonCarga::descargar() { volumen = 0; };
