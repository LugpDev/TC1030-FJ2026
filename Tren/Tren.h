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
};

#endif // __TREN_H__
