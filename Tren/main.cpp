#include <iostream>

#include "Tren.h"
#include "VagonCarga.h"
#include "VagonPasajeros.h"

using namespace std;

int main() {
  Tren *tren = new Tren(10, 2);
  *tren + new VagonCarga(50, 2);
  *tren + new VagonPasajeros(5);
  tren->agregarVagon(new VagonCarga(100, 1));
  tren->agregarVagon(new VagonCarga(50, 2));
  tren->agregarVagon(new VagonPasajeros(2));

  VagonCarga *v1 = new VagonCarga(10, 3);
  cout << v1;

  VagonPasajeros *v2 = new VagonPasajeros(3);
  cout << v2;

  if (*v1 > v2)
    cout << "Vagón de carga pesa más" << endl;
  else
    cout << "Vagón de pasajeros pesa más" << endl;

  cout << "Tren" << endl;
  cout << "Peso total del tren: " << tren->pesoTotal() << endl;
  delete tren;
  return 0;
}
