#include <stdio.h>

int fun_kwadrat(int x){
	int wynik;
	
	wynik = x*x + 2*x + 1;
	return wynik;
}

int sumuj_ciag(int s, int k, int n) {
	int wynik;
	wynik = 0;
	printf ("%d",s );
	printf ("%d",k );
	printf ("%d",n );
	for (int i = 0; i < n; i++) {
		wynik = wynik + s;
		s = s + k;
		printf ("%d \n",s );
		printf ("%d \n ",wynik);
	} 
	return wynik;
}

int main(){
	int a,f,s,n,pierw_wyr,krok;
	
	a = 4;
	n = 2;
	pierw_wyr = 1;
	krok = 2;
	
	f = fun_kwadrat(a);
	s = sumuj_ciag(pierw_wyr, krok, n);
	
	printf("Wynik = %d",f);
	printf("Wynik sum = %d",s);
	
	
	return 1;
}