#ifndef __VAGON_H__
#define __VAGON_H__

class Vagon
{
protected:
  double peso;

public:
  Vagon();
  virtual double calcularPeso() = 0;
};

#endif // __VAGON_H__