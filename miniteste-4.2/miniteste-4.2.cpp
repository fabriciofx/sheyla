//Programa para contar o número de vogais, consoantes, dígitos e espaços em branco em uma string.
//Sheyla cantalupo

#include <iostream>
using namespace std;

int vogal(string palavra);
int consoantes(string palavra);
int digitos(string palavra);
int espaco(string palavra);
int caracter(string palavra);

int main(){

  string palavra;
  
  cout<<  "Digite a palavra:";
  getline(cin,palavra);

  cout<<"Vogais: "<<vogal(palavra)<<endl;
  cout<<"Consoante: "<<consoantes(palavra)<<endl;
  cout<<"Dígitos: "<<digitos(palavra)<<endl;
  cout<<"Espaço: "<<espaco(palavra)<<endl;
  cout<<"Caracteres: "<<caracter(palavra)<<endl;

  return 0;
}

int vogal(string palavra){
  int vog=0;
  for(char vogal : palavra){
    if(vogal=='a'||vogal=='A'||vogal=='e'||vogal=='E'||vogal=='i'||vogal=='I'||vogal=='o'||vogal=='O'||vogal=='u'||vogal=='U'){//expressão para diferenciar as vogais das consoantes
      vog++;
    }  
  }
   return vog;
}

int consoantes(string palavra){
  int cons=0;
  for(char consoante : palavra){
    if(isalpha(consoante) && !(consoante=='a'||consoante=='A'||consoante=='e'||consoante=='E'||consoante=='i'||consoante=='I'||consoante=='o'||consoante=='O'||consoante=='u'||consoante=='U')){
      cons++;
    }
  }
  return cons;
}

int digitos(string palavra){
  int dig=0;
  for(char digitos : palavra){
    if(isdigit(digitos)){
      dig++;
    }
  }
  return dig;
}

int espaco(string palavra){
  int epc=0;
  for(char espaco : palavra){
    if(isspace(espaco)){
      epc++;
    }
  }
  return epc;
}

int caracter(string palavra){
  int car=0;
  for(char caracter : palavra){
    if(ispunct(caracter)){
      car++;
    }
  }
  return car;
}
