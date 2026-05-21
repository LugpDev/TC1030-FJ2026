#include "Reserva.h"

Reserva::Reserva(string _nombre, int _folio, int _asientos) {
  nombre = _nombre;
  folio = _folio;
  asientos = _asientos;
  precioTotal = asientos * PRECIO_BOLETO;
};

string Reserva::getNombre() { return nombre; };
int Reserva::getFolio() { return folio; };
int Reserva::getAsientos() { return asientos; };
int Reserva::getPrecioTotal() { return precioTotal; };
