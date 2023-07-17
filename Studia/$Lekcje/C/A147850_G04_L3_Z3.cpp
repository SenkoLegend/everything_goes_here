#include <stdio.h>


int main() {
	int a, i, wiersz, znaki;
	
	znaki = 1;
	wiersz = 4;
		
	a = 0;
	while(a < wiersz) 
	{
		
		for(i = 0; i < znaki; i++)
		{
			printf("*");
		}
	
		printf("\n");     
		a++;
		znaki++;
	}

	return 1;
}