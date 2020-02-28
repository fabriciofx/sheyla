// Programa para contar o número de vogais, consoantes, dígitos e espaços em
// branco em uma string.
// Sheyla cantalupo

#include <iostream>

using namespace std;

int vogais(string frase);
int consoantes(string frase);
int digitos(string frase);
int espacos(string frase);
int caracteres(string frase);

int main()
{
  string frase;

  cout << "Digite a frase: ";
  getline(cin,frase);

  cout << "Vogais: " << vogais(frase) << endl;
  cout << "Consoantes: " << consoantes(frase) << endl;
  cout << "Dígitos: " << digitos(frase) << endl;
  cout << "Espaços: " << espacos(frase) << endl;
  cout << "Caracteres: "<< caracteres(frase) << endl;

  return 0;
}

bool eh_vogal(char chr)
{
  return chr == 'a' || chr == 'A' ||
    chr == 'e' || chr == 'E' ||
    chr == 'i' || chr == 'I' ||
    chr == 'o' || chr == 'O' ||
    chr == 'u' || chr == 'U';
}

int vogais(string frase)
{
  int vogais = 0;
  for (char chr : frase) {
    if (eh_vogal(chr)) {
      vogais++;
    }
  }
  return vogais;
}

int consoantes(string frase)
{
  int consoantes = 0;
  for (char chr : frase) {
    if (isalpha(chr) && !eh_vogal(chr)) {
      consoantes++;
    }
  }
  return consoantes;
}

int digitos(string frase)
{
  int digitos = 0;
  for (char chr : frase) {
    if (isdigit(chr)) {
      digitos++;
    }
  }
  return digitos;
}

int espacos(string frase)
{
  int espacos = 0;
  for (char chr : frase) {
    if (isspace(chr)) {
      espacos++;
    }
  }
  return espacos;
}

int caracteres(string frase)
{
  int caracteres = 0;
  for (char chr : frase) {
    if (ispunct(chr)) {
      caracteres++;
    }
  }
  return caracteres;
}
