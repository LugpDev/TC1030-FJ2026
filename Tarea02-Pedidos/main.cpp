#include "Bebida.h"
#include "Hamburguesa.h"
#include "Pedido.h"

using namespace std;

int main() {
  Bebida bebida1 = Bebida("Coca-Cola", 0.5, 400, false);
  Hamburguesa hamburguesa1 = Hamburguesa("Hamburguesa Clásica", 2, 1, true);

  Pedido pedido({&bebida1, &hamburguesa1});
  pedido.listarProductos();

  return 0;
}
