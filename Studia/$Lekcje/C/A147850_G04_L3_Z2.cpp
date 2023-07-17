#include <stdio.h>


int main() {
	int a, i, wiersz, znaki;
	
	znaki = 3;
	wiersz = 4;
	
	a = 0;
	i = 0;
	while(a < wiersz) {
		
		while(i < znaki) {
		printf("*");
		i++;
	}
	printf("\n");     
	a++;
	i = 0;
}

	return 1;
}