#include <stdio.h>
#define N 4
#define M 6
void wczytajTablice(int t[N][M], int wier, int kol) {
	int i,j,n=2;
	for(i=0; i<wier; i++) {
		for(j=0; j<kol ; j++) {
			t[i][j]=(n*2)+2;
			n++;

		}
	}
}
void wyswietlTablice(int t[N][M], int wier, int kol,int liczba) {
	int i,j;
	for(i=0; i<wier; i++) {
		for(j=0; j<kol ; j++) {
			printf("t[%d][%d]=%2d ",i,j,t[i][j]);
		}
		printf("\n\n\n");
	}
	int z=0;
	i=0;
	for (int i =0; i<N; i++) {
		//printf("ii=%d\n",i);
		//printf("jj=%d\n",j);
		for (int j =((M/2)-1); j < M; j++) {
			if (t[i][j]==liczba) {
				z++;
				printf("Podany element znajduje sie w II cwiartce w miejscu tab[%d][%d]=%d ",i,j,t[i][j]);
			}
		}
	}
	if(z!=1) {
		printf("Podany element nie znajduje sie w II cwiartce");
	}

}


int main() {
	int liczba=0;
	printf("Podaj liczbe: ");
	scanf("%d",&liczba);
	int tab[N][M];
	wczytajTablice(tab,N,M);
	wyswietlTablice(tab,N,M,liczba);
	return 1;
}