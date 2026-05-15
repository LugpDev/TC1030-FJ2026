#include "Tren.h"

Tren::Tren(double _locomotora, double _vagoncola) {
  locomotora = _locomotora;
  vagoncola = _vagoncola;
}

double Tren::pesoTotal() {
  double total = 0;
  for (Vagon *v : vagones) {
    total = total + v->calcularPeso();
  }
  return total;
}

void Tren::agregarVagon(Vagon *nuevoVagon) { vagones.push_back(nuevoVagon); }

void Tren::operator+(Vagon *vagon) { agregarVagon(vagon); }
