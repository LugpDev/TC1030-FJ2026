#include <iostream>

#include "Tren.h"
#include "VagonCarga.h"
#include "VagonPasajeros.h"

using namespace std;

int main()
{
  Tren *tren = new Tren(10, 2);
  tren->agregarVagon(new VagonCarga(100, 1));
  tren->agregarVagon(new VagonCarga(50, 2));
  tren->agregarVagon(new VagonPasajeros(2));

  cout << "Peso total: " << tren->pesoTotal() << endl;
  delete tren;
  return 0;
}