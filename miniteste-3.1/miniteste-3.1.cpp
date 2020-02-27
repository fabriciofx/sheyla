// Programa para verificar se um ponto pertence a um plano
// Sheyla Cantalupo
#include <iostream>
#include "retangulo.hpp"

using namespace std;

int main()
{
  Retangulo r;
  Ponto p;

  r = retangulo_do_usuario();
  p = ponto_do_usuario(
    "Digite a coord. X do ponto: ",
    "Digite a coord. Y do ponto: "
  );

  if (retangulo_contem(r, p)) {
    cout << "O ponto está localizado dentro do retângulo" << endl;
  } else {
    cout << "O ponto NÃO está localizado dentro do retângulo" << endl;
  }

  return 0;
}
