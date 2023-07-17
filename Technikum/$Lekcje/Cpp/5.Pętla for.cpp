#include <iostream>
using namespace std;

int main()
{
	int i, a, b;
	cout << "Podaj od jakiej liczby liczyc: " << endl;
	cin >> a;
	cout << "Podaj z jakim krokie: " << endl;
	cin >> b;

	for(i = a; i >= 0; i -= b)
	{
		cout << i << endl;
	}

	return 0;
}


