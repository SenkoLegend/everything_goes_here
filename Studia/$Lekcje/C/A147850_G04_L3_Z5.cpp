#include <stdio.h>


int main() {
	int i, spacje, znaki, gwiazdki, a, wiersz;
	
	spacje = 6;
	znaki = 1;
	wiersz = 6; //wysokosc
	
	a = 0;
	while(a < wiersz)
	{	
		i = 0;
		while(i < znaki)
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
		
		if (a == wiersz / 2 - 1)
		{ 
		printf("h");
		} else {
		printf("|");
		}
		
		printf("\n");
		
		znaki++;
		a++;
	}
	return 1;
}