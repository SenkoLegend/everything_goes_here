#include <stdio.h>

int main(void)
{
	int rozmiar;

	rozmiar = sizeof(char);
	printf("char -> %i\n",rozmiar);
	rozmiar = sizeof(short);
	printf("short -> %i\n",rozmiar);
	rozmiar = sizeof(int);
	printf("int -> %i\n",rozmiar);
	rozmiar = sizeof(long);
	printf("long -> %i\n",rozmiar);
	rozmiar = sizeof(long long);
	printf("long long -> %i\n",rozmiar);
	
	return 1;
}

/*
Opis dzialania programu:
Programu wyswietla rozmiary typow w kompilatorze gcc.
Typ "char" jest najmniejszym type calkowitym, jego rozmiar wynosi
1 i odpowiada 1 bitowi.
Typ "short" sluzy do przechowywania mniejszych liczb, tym samym zajmuje mniej miejsca w pamieci.
Typ "int" to liczby calkowite, zajmuje 4 bajty.
Typ "long" uzywany do przechowawania dluzszych liczb, zajmuje 4 bajtow.
Typ "long long" uzywany do przechowywania jeszcze wiekszych liczb, zajmuje 8 bajtow.
*/
