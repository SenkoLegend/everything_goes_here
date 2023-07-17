#include <stdio.h>

int main ()
{
	int rok, dzienWielkanoc, miesiacWielkanoc;
	int a, b, c, d, e, f, g, h, i, j, k, m, p;
	
	rok = 2050;
	
	if (rok < 0001 || rok > 5000) {printf("rok poza skala\n"); return -1;}
	
	a = rok%19;
	b = rok/100;
	c = rok%100;
	d = b/4;
	e = b%4;
	f = (b+8)/25;
	g = (b-f+1)/3;
	h = ((19*a)+b-d-g+15)%30;
	i = c/4;
	j = c%4;
	k = (32+(2*e)+(2*i)-h-j)%7;
	m = (a+(11*h)+(22*k))/451;
	miesiacWielkanoc = (h+k-(7*m)+114)/31;
	p = (h+k-(7*m)+114)%31;
	dzienWielkanoc = p+1;
	
	printf("Data wielkanocy w roku %d to: %d.%d", rok, dzienWielkanoc, miesiacWielkanoc);
	
	
	return 1;
}