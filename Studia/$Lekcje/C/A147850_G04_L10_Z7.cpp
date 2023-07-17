#include <stdio.h>
void wczytajTablice(int t[],int rozmiar){
for(int i=0; i<rozmiar; i++) {
printf("tab[%d]= ",i);
scanf("%d",&t[i]);
}
}
void wyswietlTablice(int t[],int rozmiar){
for(int i=0; i<rozmiar; i++) {
printf("tab[%d]= %d\n",i,t[i]);
}
}
int sumujParzyste(int t[],int rozmiar){
int suma=0;
for(int i=0; i<rozmiar; i++) {
if(t[i] < 0){
suma = suma + 1;
}
}
return suma;
}
int main()
{
int tablica[6],w;
wczytajTablice(tablica,6);
wyswietlTablice(tablica,6);
w = sumujParzyste(tablica,6);
printf("Suma elementow parzystych wynosi: %d",w);
return 1;
}