#include <stdio.h>

int main ()
{
	int n=9,p=5;
	int q=1;
	float x=4;

 	
 	
	q = (n != p);
	printf("q = %d \n", q);
	/* 
	1. (),
	2. != 
	*/
	
	q = ((p % n) + p) < n;
	printf("q = %d \n", q);
	/* 
	1. (),
	2. %,
	3. +,
	4. <
	*/
	
	q = (p ++) + n);
	printf("q = %d \n", q);
	/*
	1. (),
	2. +++
	*/
	
	q = (-- p) - n;
	printf("q = %d \n", q);
	/*
	1. (),
	2. --,
	3. - 
	*/
	
	x = p / n;
	printf("x = %f \n", x);
	/*
		1. /
	*/
	
	x = (float)p / n;
	printf("x = %f \n", x);
	/*
		1. /
	*/
	
	x = (p - 1.7) / n;
	printf("x = %f \n", x);
	/* 
	1. (),
	2. -,
	3. / 
	*/
	
	x = (int)( p - 7.7);
	printf("x = %f \n", x);
	/* 
	1.(),
	2. -
	*/
	
	q = n * (p > n ? n++ : p++);
	printf("q = %d \n", q);
	/* 
	1. (),
	2. >,
	3. n++,
	4. p++,
	5. ?,
	6. :
	*/
	
	return 1;
}