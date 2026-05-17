#include "Bebida.h"
#include <iostream>

using namespace std;

int main() {
  Bebida bebida1 = Bebida("Coca-Cola", 0.5, 400, false);
  cout << "Producto: " << bebida1.getNombre() << endl;
  cout << "Precio: $" << bebida1.getPrecio() << endl;
  cout << "Contenido Calórico: " << bebida1.getContenidoCalorico() << endl;

  return 0;
}
