#include <iostream>

using namespace std;

int main()
{
	int t[50];
	int n;
	float s, srednia;
	s = 0;

	cout << "Podaj ile chcesz liczb (max 50): ";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> t[i];
		s = t[i] + s;
	}

	cout << "Oto liczby, ktore podales w odwrotnej kolejnosci:" << endl;
	srednia = s / n;
	for (int i = 0; i < n; ++i)
	{
		if (t[i] > srednia)
			cout << t[i] << endl;
	}

	system("pause");

	return 0;

}