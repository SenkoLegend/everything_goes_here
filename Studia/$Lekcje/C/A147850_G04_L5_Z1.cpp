#include <stdio.h>

int main ()
{
	int n,p,q;
	n = 5; p = 2;
	q = (((n++) < p) || ((++p) == 3));
	printf("A: n=%d p=%d q=%d \n",n,p,q);
	/* 
		1. ++, 
		2. <, 
		3. || 
	*/

	n = 5; p = 2;
	q = (((n++) > p) || (++p) == 3);
	printf("B: n=%d p=%d q=%d \n",n,p,q);
	/*
		1. ++,
		2. <,
		3. ||
	*/

	n = 5; p = 2;
	q = (((++n) != 3) && (++p) == 3);
	printf("C: n=%d p=%d q=%d \n",n,p,q);
	/* 
		1. ++,
		2. !=,
		3. &&
	*/

	n = 5; p = 2;
	q = (((++n) != 6) && (++p) == 3);
	printf("D: n=%d p=%d q=%d \n",n,p,q);
	/*
		1. ++,
		2. !=,
		3. &&
	*/
	
	
	return 1;
}