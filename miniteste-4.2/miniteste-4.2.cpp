// Programa para contar o número de vogais, consoantes, dígitos e espaços em
// branco em uma string.
// Sheyla cantalupo

#include <iostream>

using namespace std;

int vogais(string palavra);
int consoantes(string palavra);
int digitos(string palavra);
int espacos(string palavra);
int caracteres(string palavra);

int main()
{
  string palavra;

  cout << "Digite a palavra: ";
  getline(cin,palavra);

  cout << "Vogais: " << vogais(palavra) << endl;
  cout << "Consoantes: " << consoantes(palavra) << endl;
  cout << "Dígitos: " << digitos(palavra) << endl;
  cout << "Espaços: " << espacos(palavra) << endl;
  cout << "Caracteres: "<< caracteres(palavra) << endl;

  return 0;
}

bool eh_vogal(char c)
{
  return c == 'a' || c == 'A' ||
    c == 'e' || c == 'E' ||
    c == 'i' || c == 'I' ||
    c == 'o' || c == 'O' ||
    c == 'u' || c == 'U';
}

int vogais(string palavra)
{
  int vogais = 0;
  for (char letra : palavra) {
    if (eh_vogal(letra)) {
      vogais++;
    }
  }
  return vogais;
}

int consoantes(string palavra)
{
  int consoantes = 0;
  for (char letra : palavra) {
    if (isalpha(letra) && !eh_vogal(letra)) {
      consoantes++;
    }
  }
  return consoantes;
}

int digitos(string palavra)
{
  int digitos = 0;
  for (char letra : palavra) {
    if (isdigit(letra)) {
      digitos++;
    }
  }
  return digitos;
}

int espacos(string palavra)
{
  int espacos = 0;
  for (char letra : palavra) {
    if (isspace(letra)) {
      espacos++;
    }
  }
  return espacos;
}

int caracteres(string palavra)
{
  int caracteres = 0;
  for (char letra : palavra) {
    if (ispunct(letra)) {
      caracteres++;
    }
  }
  return caracteres;
}
