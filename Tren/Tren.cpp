#include "Tren.h"
#include "VagonCarga.h"
#include "VagonPasajeros.h"

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

void Tren::cargar(int _i, double _carga) {
  if (_i >= 0 && _i < vagones.size()) {
    VagonCarga *vc = dynamic_cast<VagonCarga *>(vagones[_i]);
    if (vc)
      vc->cargar(_carga);
    else
      cout << "ERROR: El vagón no es un vagón de carga." << endl;

  } else {
    cout << "ERROR: Índice de vagón fuera de rango." << endl;
  }
};

void Tren::reservar(string _nombre, int _asientos) {
  int total = 0;

  for (Vagon *v : vagones) {
    VagonPasajeros *vp = dynamic_cast<VagonPasajeros *>(v);

    if (vp)
      total += vp->disponibles();
  }

  if (_asientos <= total) {

  }

  else
    cout << "ERROR: No hay suficientes asientos disponibles." << endl;
}
