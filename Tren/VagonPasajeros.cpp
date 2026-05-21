#include "VagonPasajeros.h"

VagonPasajeros::VagonPasajeros(int _num) {
  cupo = _num;
  reservados = 0;
}

double VagonPasajeros::calcularPeso() {
  peso = reservados * 70.0;
  return peso;
}

void VagonPasajeros::mostrar(std::ostream &os) {
  os << "Vagon de pasajeros" << std::endl
     << "Cupo: " << cupo << std::endl
     << "Asientos reservados: " << reservados << std::endl
     << "Peso approx: " << calcularPeso() << std::endl;
}

int VagonPasajeros::disponibles() { return cupo - reservados; };
