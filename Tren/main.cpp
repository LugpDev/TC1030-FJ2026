#include <iostream>

#include "Tren.h"
#include "VagonCarga.h"
#include "VagonPasajeros.h"

using namespace std;

int main() {
  Tren *tren = new Tren(10, 2);
  *tren + new VagonCarga(0, 2);
  *tren + new VagonPasajeros(5);
  tren->agregarVagon(new VagonCarga(100, 1));
  tren->agregarVagon(new VagonCarga(50, 2));
  tren->agregarVagon(new VagonPasajeros(2));

  VagonCarga *v1 = new VagonCarga(0, 3);
  cout << v1;
  *tren + v1;
  VagonPasajeros *v2 = new VagonPasajeros(3);
  cout << v2;
  *tren + v2;

  if (*v1 > v2)
    cout << "Vagón de carga pesa más" << endl;
  else
    cout << "Vagón de pasajeros pesa más" << endl;

  cout << "Tren" << endl;
  cout << "Peso total del tren: " << tren->pesoTotal() << endl;
  v1->cargar(400);
  tren->cargar(0, 400);
  tren->cargar(40, 400);
  cout << "Tren" << endl;
  cout << "Peso total del tren: " << tren->pesoTotal() << endl;
  v1->descargar();
  cout << "Tren" << endl;
  cout << "Peso total del tren: " << tren->pesoTotal() << endl;

  tren->reservar("Juan", 2);

  delete tren;
  return 0;
}
