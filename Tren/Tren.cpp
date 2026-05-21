#include "Tren.h"
#include "Reserva.h"
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
    int folio = reservas.size() + 1;
    Reserva *reserva = new Reserva(_nombre, folio, _asientos);
    reservas.push_back(reserva);

    int asientosRestantes = _asientos;
    for (Vagon *v : vagones) {
      VagonPasajeros *vp = dynamic_cast<VagonPasajeros *>(v);
      if (vp) {
        if (asientosRestantes > 0) {
          int disponibles = vp->disponibles();
          int aReservar = min(disponibles, asientosRestantes);
          vp->reservar(aReservar);
          asientosRestantes -= aReservar;
        } else {
          break;
        }
      }
    }

    cout << "Reserva para " << _nombre << " con folio " << folio << " por "
         << _asientos << " asientos realizada exitosamente." << endl;
  } else {
    cout << "ERROR: La reserva para " << _nombre << " no pudo ser realizada "
         << endl;
    cout << "Asientos solicitados: " << _asientos
         << ", Asientos disponibles: " << total << endl;
  }
}
