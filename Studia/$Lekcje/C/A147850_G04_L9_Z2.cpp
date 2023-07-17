#include <stdio.h>

int mediana(int x1, int x2, int x3){
	
	int mediana;
	if(x1 < x2) {
		if(x2 < x3){
			mediana = x2;
		}
		else mediana = x3;
	}
	else{
		if(x1 < x3){
			mediana = x1;
		}
		else mediana = x3;
	}
	return mediana;
}

int main(){
	
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	scanf("%d %d %d", &x1, &x2, &x3);
	printf("Mediana tych liczb to: %d\n", mediana(x1, x2, x3));
	printf("%d, %d, %d", x1, x2, x3);
	
	return 1;
}