#ifndef __TREN_H__
#define __TREN_H__

#include "VagonCarga.h"
#include <vector>

using namespace std;

class Tren {
private:
  double locomotora;
  double vagoncola;
  vector<Vagon *> vagones;

public:
  Tren(double _locomotora, double _vagoncola);
  double pesoTotal();
  void agregarVagon(Vagon *nuevoVagon);
  void operator+(Vagon *nuevoVagon);
  void cargar(int _i, double _carga);
  void reservar(string _nombre, int _asientos);
};

#endif // __TREN_H__
