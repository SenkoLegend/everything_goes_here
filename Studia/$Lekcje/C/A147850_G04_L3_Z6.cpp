#include <stdio.h>


int main() {
	int i, spacje, dlugosc, gwiazdki, a, wysokosc;
	
	spacje = 6;
	dlugosc = 1;
	wysokosc = 6; //wysokosc
	
	a = 0;
	while(a < wysokosc)
	{	
		i = 0;
		while(i < dlugosc)
		{
			printf("*");
			i++;
		}
		
		i = 0;
		while(i < spacje)
		{
			printf(" ");
			i++;
		}
		spacje--;
		
		if (a == wysokosc / 2 - 1)
		{ 
		printf("h");
		} else {
		printf("|");
		}
		
		printf("\n");
		
		dlugosc++;
		a++;
	}
	return 1;
}