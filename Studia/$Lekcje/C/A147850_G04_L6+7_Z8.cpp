#include <stdio.h>

int main(void){
	
int n;
 	
scanf("%d", &n);
if (n == 0){
	printf("Zero\n");
} else if (n == 1 || n == 2){
	printf("Mala\n");
} else if (n == 3 || n == 4 || n == 5) {
	printf("Srednia\n");
} else if (n == 6 || n == 7 || n == 8) {
	printf("Duza\n");
}
 return 1;
}

/*
Krok	linia	n	opis
1.		7		input	użytkownik podaje liczbe
2.		8		input	sprawdzanie czym jest n
jeśli n		
3.		9		0		"zero"
4.		10		1		"mala"
5.		11		2		"mala"
6.		12 				break; (wyjsc z petli)
7.		13		3		"srednia"
8.		14		4		"srednia"
9.		15		5		"srednia"
10.		16		6		"duza"
11.		17		7		"duza"
12.		18		8		"duza"
*/