#include <stdio.h>

int main(){
	int n, p;
	
	n=p=0;
 	while (n<=10)
	{
		n += 3;
		p--;
	}
 	printf("A: n = %d p = %d\n",n ,p);
 	
 	n=p=0;
 	while (n<=10)
	{
		n += 3;
		p--;
	}
 	printf("B: n = %d p = %d\n",n ,p);
 	
 	n=p=0;
 	while (p<=10)
	{
	 	n += 3; 
		p += n;
	}
	printf("C: n = %d p = %d\n",n ,p);
 	
 	return 1;
}