#include <stdio.h>


int main() {
	int i, spacje, znaki;
	
	spacje = 10;
	znaki = 3;
	
	i = 0;
	while(i < spacje)
	{
		printf(" ");
		i++;
	}

	i = 0;
	while(i < znaki)
	{
		printf("*");
		i++;
	}
	
	printf("\n");
	
	return 1;
}