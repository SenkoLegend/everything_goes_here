#include <stdio.h>

int main ()
{
	int x, wynik;
	x = 7648;

  wynik = 0;
  while (x != 0)
  {
     wynik += x%10;
     x /= 10;
  }


  printf("suma cyfr podanej liczby wynosi %d", wynik);
	return 1;
}