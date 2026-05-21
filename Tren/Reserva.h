#ifndef RESERVA_H
#define RESERVA_H

#include <string>

using namespace std;

class Reserva {
private:
  string nombre;
  int folio;
  int asientos;
  int precioTotal;

  static const int PRECIO_BOLETO = 100;

public:
  Reserva(string _nombre, int _folio, int _asientos);
  string getNombre();
  int getFolio();
  int getAsientos();
  int getPrecioTotal();
};

#endif // !RESERVA_H
