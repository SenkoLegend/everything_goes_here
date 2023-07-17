#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int a, b, c;
	cin >> a >> b >> c;
	cout << "==============" << endl;
	for (int i = 0; i < c; ++i)
	{
		cout << rand() % (b - a + 1) + a << endl; 
	}

	system("pause");

	return 0;
}