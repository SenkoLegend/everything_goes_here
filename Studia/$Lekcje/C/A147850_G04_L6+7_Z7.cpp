#include <stdio.h>

int main(void){
	
int n;
 	
scanf("%d", &n);
switch(n){
 case 0: printf("Zero\n");
 case 1:
 case 2: printf("Mala\n");
 break;
 case 3:
 case 4:
 case 5: printf("Srednia\n");
 case 6: 
 case 7: 
 case 8: printf("Duza\n");
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
8.		14		4		"srednia"
12.		18		8		"duza"
14.     19      10 		nic
				-5		nic
*/