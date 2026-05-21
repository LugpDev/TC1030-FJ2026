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

  cout << "========================================" << endl;
  cout << "Comparación de pesos" << endl;
  cout << "========================================" << endl;
  if (*v1 > v2)
    cout << "Vagón de carga pesa más" << endl;
  else
    cout << "Vagón de pasajeros pesa más" << endl;
  cout << "========================================\n" << endl;

  cout << "========================================" << endl;
  cout << "Pesos del tren" << endl;
  cout << "========================================" << endl;
  cout << "Peso inicial del tren: " << tren->pesoTotal() << endl;
  cout << "Añadiendo carga..." << endl;
  v1->cargar(400);
  tren->cargar(0, 400);
  tren->cargar(40, 400); // Debe mostrar error
  cout << "Peso total del tren: " << tren->pesoTotal() << endl;
  cout << "Descargando..." << endl;
  v1->descargar();
  cout << "Peso total del tren: " << tren->pesoTotal() << endl;
  cout << "========================================\n" << endl;

  cout << "========================================" << endl;
  cout << "Haciendo las reservas" << endl;
  cout << "========================================" << endl;
  tren->reservar("Juan", 7);
  tren->reservar("Luis", 2);
  tren->reservar("Carlos", 3); // Debe mostrar error
  cout << "========================================\n" << endl;

  cout << "========================================" << endl;
  cout << "Reservas guardadas" << endl;
  cout << "========================================" << endl;
  tren->mostrarReservas();
  cout << "========================================\n" << endl;

  delete tren;
  return 0;
}
