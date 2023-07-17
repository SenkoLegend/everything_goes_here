#include <stdio.h>
int main(void)
{
 int tab[6];
 int i;
 int suma;
 
 tab[0] = 2; tab[1] = 3; tab[2] = 3;
 tab[3] = 6; tab[4] = 4; tab[5] = 9;
  
  
  suma=0;
  suma = suma + tab[0]+ tab[1]+ tab[2];
 if(tab[5]>suma){
 		tab[2]*=3;
 }else{
 	tab[1]= tab[1]+(tab[4]-tab[5]);
 }
 
 

 for(i=0; i<6; i++) {
 printf("%d \n", tab[i]);
 } 
 

 return 1;
}