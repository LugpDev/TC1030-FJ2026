#ifndef RESERVA_H
#define RESERVA_H

#include <string>

using namespace std;

class Reserva {
private:
  string nombre;
  int folio;
  int asientos;

public:
  Reserva(string _nombre, int _folio, int _asientos);
  string getNombre();
  int getFolio();
  int getAsientos();
};

#endif // !RESERVA_H
