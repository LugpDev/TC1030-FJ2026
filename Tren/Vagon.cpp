#include "Vagon.h"

Vagon::Vagon() { peso = 0; }

std::ostream &operator<<(std::ostream &os, Vagon *v) {
  v->mostrar(os);
  return os;
}

bool Vagon::operator>(Vagon *vagon) {
  return (this->calcularPeso() > vagon->calcularPeso());
}
