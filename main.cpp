/*
 * Considere un algoritmo que reciba como dato de entrada un n ́umero entero positivo n.
Si n es par, el algoritmo lo divide entre dos, y si n es impar, el algoritmo lo multiplica
por tres y le agrega 1. El algoritmo se repetir ́a hasta que eventualmente n tome el valor
de 1. Por ejemplo, la secuencia para n = 3 ser ́a la siguiente:
3 → 10 → 5 → 16 → 8 → 4 → 2 → 1
 */


#include <iostream>
using namespace std ;

void secuencia(int n);

int main()
{
  int n;

  do{
    cout << "Numero : ";
    cin >> n;
  }while(n<1);

  cout << "\nSecuencia\n";
  secuencia(n);

  return 0;
}


void secuencia(int n)
{
  cout << n << " ";
  while( n!=1)
  {
    if( n %2 ==0)
      n = n / 2;
    else
      n = n * 3 + 1;
    cout << n << " ";
  }
}

