#include <stdio.h>

int main(void)
{
	int rozmiar;

	rozmiar = sizeof(double);
	printf("double -> %i\n",rozmiar);
	rozmiar = sizeof(flout);
	printf("float -> %i\n",rozmiar);
	
	return 1;
}

/*
Opis dzialania programu:
Programu wyswietla rozmiary typow w kompilatorze gcc.
Typ "double" uzywany jest do przechowywania duzych liczb zmiennoprzecinkowych z duza iloscia miejsc po przecinku,
zajmuje 8 bajtow.
Typ "float" uzywany jest do przechowywania wartosci zmiennoprzecinkowych, zajmuje 4 bajtow.

*/
