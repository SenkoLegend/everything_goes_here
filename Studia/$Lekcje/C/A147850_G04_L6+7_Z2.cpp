#include <stdio.h>

int main(){
	int n, p;
	
	n = 15;
	p = 1;
	
	while(n>=2){
		n -= p++;
	}
	printf("n=%d, p=%d", n, p);
	
	return 1;
}

/*
Krok	Linia	n	p	Uwagi
1.		4		--	--	
2.		9		15	1	Sprawdzenie warunku (prawda)
3.		10		14	2	n = n - p;
						p = p + 1;
4.		9		14	2	Sprawdzenie warunku (prawda)
5.		10		12 	3	n = n - p; 
						p = p + 1;
6.		9		12	3	Sprawdzenie warunku (prawda)
7.		10		9	4	n = n - p; 
						p = p + 1;
8.		9		9	4	Sprawdzenie warunku (prawda)
9.		10		5	5	n = n - p; 
						p = p + 1;
10.		9		5	5	Sprawdzenie warunku (prawda)
11.		10		0	6	n = n - p; 
						p = p + 1;
12.		9		0	6	Sprawdzenie warunku (fałsz)
13.		12		0	6	Wyświetlenie komunikatu
*/