#include <stdio.h>

int main(void){
	int wykladnik, i, wynik;
	
	wykladnik = 5;
	i = 1;
	wynik = 1;
	
	for(i = 1; i<=wykladnik;i++){
		wynik = wynik*i;
	}
	printf("Wynik 5! = %d", wynik);
	
	return 1;
}

/*
Krok	Linia	wykladnik	i	wynik	Uwagi
1.		4		--			--	--
2.		10		5			1	1		Sprawdzanie warunku (prawda)
3.		11		5			1	1		wynik=wynik*i
4.		12		5			2	1		i++
5.		10		5			2	1		Sprawdzanie warunku (prawda)
6.		11		5			2	2		wynik=wynik*i
7.		12		5			3	2		i++
8.		10		5			3	2		Sprawdzanie warunku (prawda)
9.		11		5			3	6		wynik=wynik*i
10.		12		5			4	6		i++
11.		10		5			4	6		Sprawdzanie warunku (prawda)
12.		11		5			4	24		wynik=wynik*i
13.		12		5			5	24		i++
14.		10		5			5	24		Sprawdzenie warunku (prawda)
15.		11		5			5	120		wynik=wynik*i
16.		12		5			6	120		i++
17.		10		5			6	120		Sprawdzenie warunku (fałsz)
18.		14		5			6	120		Wyświetlenie komunikatu
*/