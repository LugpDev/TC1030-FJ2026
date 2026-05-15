#include "VagonPasajeros.h"

VagonPasajeros::VagonPasajeros(int _num) { num = _num; }

double VagonPasajeros::calcularPeso() {
  peso = num * 70.0;
  return peso;
}

void VagonPasajeros::mostrar(std::ostream &os) {
  os << "Vagon de pasajeros" << std::endl
     << "No. de pasajeros: " << num << std::endl
     << "Peso approx: " << calcularPeso() << std::endl;
}
