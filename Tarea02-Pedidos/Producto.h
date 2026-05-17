#include <string>

using namespace std;

class Producto {
protected:
  string nombre;
  double precio;
  double contenidoCalorico;

public:
  Producto(string _nombre, double _precio);
  string getNombre();
  virtual double getPrecio() = 0;
  virtual double getContenidoCalorico() = 0;
};
