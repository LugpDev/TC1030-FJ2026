#ifndef PEDIDO_H
#define PEDIDO_H

#include "Producto.h"
#include <vector>

class Pedido {
private:
  vector<Producto *> productos;
  void agregarProducto(Producto *producto);

public:
  Pedido(vector<Producto *> _productos);
  void listarProductos();
  vector<Producto *> getProductos();
  void operator+(Producto *producto);
  Pedido operator+(Pedido *otro);
};

#endif
