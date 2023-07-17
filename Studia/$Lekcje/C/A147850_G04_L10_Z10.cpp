#include <stdio.h>
#define ROZMIAR 10
void wczytajTablice(int t[],int rozmiar){
for(int i=0; i<rozmiar; i++) {
printf("tab[%d]= ",i);
scanf("%d",&t[i]);
}
}
float sredniaElementyPodzielnePrzez3(int t[],int rozmiar){
int i;
int liczba=0; // zlicza znalezione elementy
float suma=0;
for(i=0; i<rozmiar; i++) {
if(t[i] < 0){
suma = suma + t[i];
liczba++;
}
}
return suma/liczba;
}
int main()
{
int tablica[ROZMIAR];
float w;
wczytajTablice(tablica,ROZMIAR);
w = sredniaElementyPodzielnePrzez3(tablica,ROZMIAR);
printf("Sr. elem. podzielnych przez 3 wynosi: %f\n",w);
return 1;
}