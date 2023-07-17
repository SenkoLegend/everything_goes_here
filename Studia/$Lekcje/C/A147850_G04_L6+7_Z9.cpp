#include <stdio.h>

int main(void){
int n=0;

 while(1){
 	
 if(n%2==0){
 printf("%d jest liczba parzysta\n",n);
 n+=3;
 continue;
 }
 
 if(n%3==0){
 printf("%d jest podzielne przez 3\n",n);
 n+=5;
 continue;
 }
 
 if(n%5==0){
 printf("%d jest podzielne przez 5\n",n);
 break;
 }
 
 n += 1;
}

/*
Program odpowiada czy liczba jest parzysta, jeśli reszta z podanej liczby podzielona przez 2
jest równa 0, w przeciwnym razie jest nieparzysta. Dodatkowo sprawdza czy liczba może być
podzielna przez 5 sprawdzają czy reszta z podanej liczby podzielonej przez 5 wynosi 0.
*/