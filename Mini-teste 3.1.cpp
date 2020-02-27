//Programa para verificar se um ponto pertece a um plano
//Sheyla Cantalupo
#include <iostream>
using namespace std;

struct Ponto{
  int x;
  int y;
  
};

int main() {

  Ponto v1, v2, ponto;
//cin e cout repetitivos, poderia ser feito uma função para eles?
  cout<<"x do V1:";
  cin>>v1.x;

  cout<<"y do V1:";
  cin>>v1.y;

  cout<<"x do V2:";
  cin>>v2.x;

  cout<<"y do V2:";
  cin>>v2.y;

  cout<<"x do Ponto:";
  cin>>ponto.x;

  cout<<"y do Ponto:";
  cin>>ponto.y;

  if((v1.x<=ponto.x&&ponto.x<=v2.x)&&(v1.y<=ponto.y&&ponto.y<=v2.y)){
    //queria fazer uma função e tirar essa expressao da int main()
    cout<< "O ponto está localizado dentro do retângulo";
  }
  else{
    cout<< "O ponto NÃO está localizado dentro do retângulo";
  }
  
}