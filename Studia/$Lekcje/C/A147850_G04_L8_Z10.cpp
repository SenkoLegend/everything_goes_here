#include <stdio.h>

int main(){
	float tab[12];
	int i;
	int suma;
	int ilosc;
	ilosc = 0;
	suma = 0;
	
	tab[0] = 2200; 
	tab[1] = 5100; 
	tab[2] = 3100; 
	tab[3] = 6300;
	tab[4] = 1200; 
	tab[5] = 4500; 
	tab[6] = 3400; 
	tab[7] = 7200;
	tab[8] = 1300; 
	tab[9] = 2300; 
	tab[10] = 4300; 
	tab[11] = 3300;
	
	printf("Wynagrodzenie\n");
	for(i = 0; i <= 11; i++) 
	{
		printf("miesiac [%2d]= %f\n",i+1 ,tab[i]);
	}
	
	printf("----------------\n");
	
	for(i = 0; i <= 11; i++) 
	{
		suma += tab[i];
		ilosc++;
	}
	printf("Roczne zarobki: %6d \n",suma);
	
	printf("--------------------\n");
	printf("Srednie miesieczne zarobki: %6d", (suma/ilosc));
	return 1;
}