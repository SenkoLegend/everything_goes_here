#include <stdio.h>

int silnia(int k){ 
	int s = 1;
	int a=2*k+1;
	for (int i = 0; i < a; i++){
		s = s*(a - i);
	}
	return s;
}

int potega(int a, int x){
	int p = 1;
	int k;
	a=2*k+1;
	for (int i = 1; i < a; i++){
		p = p*x;
	}
	return p;
}

int main(void){
	int k;
	int x;

	printf("podaj k w zakresie od 1 do 15\n");
	scanf("%d", &k);
	printf("podaj x\n");
	scanf("%d", &x);

	int a=2*k+1;

	double sum = 1;
	for (int i = 1; i < a; i++){
		sum = sum + (potega(i,x)/silnia(i));
	
		printf("suma szeregu wynosi %f\n", sum);
	}
return 1;
}