#include <stdio.h>

int main(void)
{
	unsigned char znak = '0';
	
	while(znak <= '9') 
	{
		printf("'%c' %d %Xh\n", znak, znak, znak);
		znak = znak + 1;
	}
	
	return 1;
}

/*
Opis dzialania programu:
Program wyswietla cyfry i ich decymalne i hexodecymalne odpowiedniki w kodzie.
*/
