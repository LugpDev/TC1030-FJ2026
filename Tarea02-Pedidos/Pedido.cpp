#include "Pedido.h"

#include <iomanip>
#include <iostream>

using namespace std;

Pedido::Pedido(vector<Producto *> _productos) {
  for (Producto *producto : _productos) {
    agregarProducto(producto);
  }
}

void Pedido::agregarProducto(Producto *producto) {
  productos.push_back(producto);
}

void Pedido::listarProductos() {
  cout << left << setw(25) << "| Producto" << setw(12) << "| Precio"
       << "| Contenido Calorico |" << endl;
  cout << string(57, '-') << endl;

  for (Producto *producto : productos) {
    cout << "| " << left << setw(23) << producto->getNombre() << "| $" << left
         << setw(10) << producto->getPrecio() << "| "
         << producto->getContenidoCalorico() << endl;
  }
}

void Pedido::operator+(Producto *producto) { agregarProducto(producto); }

vector<Producto *> Pedido::getProductos() { return productos; }

Pedido Pedido::operator+(Pedido *otro) {
  vector<Producto *> productosCombinados = productos;
  vector<Producto *> otrosProductos = otro->getProductos();

  for (Producto *producto : otrosProductos) {
    productosCombinados.push_back(producto);
  }

  return Pedido(productosCombinados);
}
