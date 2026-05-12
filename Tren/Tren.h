#ifndef __TREN_H__
#define __TREN_H__

#include <vector>
#include "VagonCarga.h"

using namespace std;

class Tren
{
private:
  double locomotora;
  double vagoncola;
  vector<Vagon *> vagones;

public:
  Tren(double _locomotora, double _vagoncola);
  double pesoTotal();
  void agregarVagon(Vagon *nuevoVagon);
};

#endif // __TREN_H__