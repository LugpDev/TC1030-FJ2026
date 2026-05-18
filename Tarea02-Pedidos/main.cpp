#include "Bebida.h"
#include "Hamburguesa.h"
#include "Pedido.h"
#include <iostream>

using namespace std;

int main() {
  Bebida bebida1 = Bebida("Coca-Cola", 0.5, 400, false);
  Hamburguesa hamburguesa1 = Hamburguesa("Hamburguesa Clásica", 2, 1, true);

  Pedido pedido({&bebida1, &hamburguesa1});
  pedido.listarProductos();

  Bebida agua("Agua", 0.5, 0, true);
  pedido + &agua;
  pedido.listarProductos();

  cout << "Comparando contenido calórico: " << endl;
  cout << bebida1.getNombre() << " tiene "
       << (bebida1 > hamburguesa1 ? "más calorías" : "menos calorías") << " que "
       << hamburguesa1.getNombre() << endl;

  Pedido pedido2({new Bebida("Jugo de Naranja", 0.5, 300, false)});

  Pedido pedidoCombinado = pedido + pedido2;
  pedidoCombinado.listarProductos();

  return 0;
}
