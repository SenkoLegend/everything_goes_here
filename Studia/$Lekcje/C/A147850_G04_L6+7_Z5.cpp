#include <stdio.h>

int main(void){
	int n, i, wynik;
	
	n = 6;
	i = 1; 
	wynik = 0;
	
	while(i<n){
		wynik = wynik+i;
		i = i+i;
	}
	printf("Wynik=%d\n", wynik);
	
	return 1;
}

/*
Krok	Linia	n	i	wynik	Uwagi
1.		4		--	--	--
2.		10		6	1	0		Sprawdzenie warunku (prawda)
3.		11		6	1	1		wynik=wynik+i
4.		12		6	2	1		i=i+i
5.		10		6	2	1		Sprawdzenie warunku (prawda)
6.		11		6	2	3		wynik=wynik+i
7.		12		6	4	3		i=i+i
8.		10		6	4	3		Sprawdzenie warunku (prawda)
9.		11		6	4	7		wynik=wynik+i
10.		12		6	8	7		i=i+i
11.		10		6	8	7		Sprawdzenie warunku (fałsz)
12.		14		6	8	7		Wyświetlenie komunikatu
*/