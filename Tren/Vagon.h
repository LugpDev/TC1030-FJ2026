#ifndef __VAGON_H__
#define __VAGON_H__

#include <iostream>

class Vagon {
protected:
  double peso;

public:
  Vagon();
  virtual double calcularPeso() = 0;
  friend std::ostream &operator<<(std::ostream &os, Vagon *v);
  virtual void mostrar(std::ostream &os) = 0;
  bool operator>(Vagon *v);
};

#endif // __VAGON_H__
