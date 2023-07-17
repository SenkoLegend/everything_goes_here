#include <stdio.h>

int main(void)
{
	unsigned char znak = 'A';
	
	while(znak < 'K') 
	{
		printf("'%c' %d %Xh\n", znak, znak, znak);
		znak = znak + 1;
	}
	
	return 1;
}

/*
Opis dzialania programu:
Program wyswietla litery i ich decymalne i hexodecymalne odpowiedniki w kodzie.
*/
