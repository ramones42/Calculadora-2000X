#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  float a, b;
  float i;
  char ope;
  cout << "Digite um valor";
  cin >> a;
  cout << "Qual operação você deseja realizar? A - adicao, S - subtracao, M - multiplicacao, D - divisao, 0 - Cancelar";
  cin >> ope;

  switch (ope)
  {
  case 'A':
    cout << "Digite outro numero";
    cin >> b;
    i = {a + b};
    cout << "A soma dos dois números é" << i;
    break;
  case 'S':
    cout << "Digite outro numero";
    cin >> b;
    i = {a - b};
    cout << "A subtracao dos dois numeros é" << i;
    break;
  case 'M':
    cout << "Digite outro numero";
    cin >> b;
    i = {a * b};
    cout << "A multiplicacao dos dois numeros é" << i;
    break;
  case 'D':
    cout << "Digite outro numero";
    cin >> b;
    i = {a / b};
    cout << "A divisao dos dois numeros é" << i;
    break;
  
  default:
    cout << "Opção invalida" << endl;
    break;
  }

  return 0;
}