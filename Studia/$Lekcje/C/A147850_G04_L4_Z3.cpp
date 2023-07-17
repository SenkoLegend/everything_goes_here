#include <stdio.h>

int main(void)
{
	unsigned int l_int;
	float l_float;
	short l_short;
	char l_char;
	
	l_int = 0;
	printf("unsigned int => %i\n",l_int);
	l_int = 128;
	printf("unsigned int => %i\n",l_int);
	l_int = 255;
	printf("unsigned int => %i\n",l_int);
	l_int = 32768;
	printf("unsigned int => %i\n",l_int);
	
	
	l_float = 0;
	printf("float => %i\n",l_float);
	l_float = 128;
	printf("float => %i\n",l_float);
	l_float = 255;
	printf("float => %i\n",l_float);
	l_float = 32768;
	printf("float => %i\n",l_float);
	
	l_short = 0;
	printf("short => %i\n",l_short);
	l_short = 128;
	printf("short => %i\n",l_short);
	l_short = 255;
	printf("short => %i\n",l_short);
	l_short = 32768;
	printf("short => %i\n",l_short);
	
	l_char = 0;
	printf("char => %i\n",l_char);
	l_char = 128;
	printf("char => %i\n",l_char);
	l_char = 255;
	printf("char => %i\n",l_char);
	l_char = 32768;
	printf("char => %i\n",l_char);
	
	return 1;
}

/*
Opis dzialania programu:
Program pozakuje zachowania zmiennych w zestawieniu z roznymi wartosciami liczbowymi.
*/
