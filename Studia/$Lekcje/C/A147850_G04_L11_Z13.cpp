#include <stdio.h>
#define N 720

void wypelnijTablice(int t[N][N], int rozmiar){
	for(int i=0; i<rozmiar; i++)
	{
		for(int j=0; j<rozmiar; j++)
		{
			if(i>=j) {
				t[i][j] = i+1;
			} else {
				t[i][j] = j+1;
			}
		}
	}
}
void wyswietlTablice(int t[N][N], int rozmiar){
	int i = 0;
	int j = 0;
	
	for(i=0; i < rozmiar; i++)
	{
		for(j=0; j < rozmiar; j++)
		{
			printf("%3d", t[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int t[N][N];
	int rozmiar = 8;
	
	wypelnijTablice(t, rozmiar);
	wyswietlTablice(t, rozmiar);
	
	return 1;
}
