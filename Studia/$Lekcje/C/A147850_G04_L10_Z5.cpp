#include <stdio.h>
#include <iostream>

int potega(int t, int n) {
	int tab[t], i,pot=0;
 
 for(i=1; i<=t; i++) {
 tab[i] = n;
 
 }
 
 	for(i=1; i<=t; i++) {
 		tab[i+1] = tab[i]*tab[i+1];
 		
 		printf("tab[%d]= %d\n",i,tab[i]);
	 }	
}
int main()
{
	int t,n;
		printf("Podaj rozmiar tablicy: ");
		scanf("%d",&t);
		
			printf("Podaj n: ");
			scanf("%d",&n);
	

potega(t,n);
 
 /*
 for(i=1; i<=t; i++) {
 tab[i] = n;
 
 }
 
 	for(i=1; i<=t; i++) {
 		tab[i+1] = tab[i]*tab[i+1];
 		
 		printf("tab[%d]= %d\n",i,tab[i]);
	 }
	 */	
 return 1;
}