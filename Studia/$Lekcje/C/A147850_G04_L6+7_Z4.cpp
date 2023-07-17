#include <stdio.h>

int main(){
	int n, i;
	
	for (i=0, n=0; i<4; i++) n+=i;
	printf(" A: i = %d, n = %d\n", i, n);
	
	for(i=0, n=0; i<4; i++, n+=i){}
	printf(" B: i = %d, n = %d\n", i, n);
	
	return 1;
	}
	
/*
Krok	Linia	n	i	Uwagi
1.		4		--	--	
2.		6		1	1	Sprawdzenie warunku (prawda); 
						n = n + i
3.		6		2	2	Sprawdzenie warunku (prawda); 
						n = n + i
4.		6		4	3	Sprawdzenie warunku (prawda); 
						n = n + i
5.		6		6	4	Sprawdzenie warunku (fałsz)

6.		6		6	4	Wyświetlenie komunikatu

7.		9		0	0	Sprawdzenie warunku (prawda) 
						n = n + i
8.		9		1	1	Sprawdzenie warunku (prawda) 
						n = n + i
9.		9		3	2	Sprawdzenie warunku (prawda) 
						n = n + i
10.		9		6	3	Sprawdzenie warunku (prawda) 
						n = n + i
11.		9		10	4	Sprawdzenie warunku (fałsz)

12.		10		10	4	Wyświetlenie komunikatu
*/