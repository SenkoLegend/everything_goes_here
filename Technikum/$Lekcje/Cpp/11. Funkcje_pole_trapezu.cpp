#include <iostream>
#include <string>

using namespace std;

float poleTrapezu(float bok1, float bok2, float wys)
{
	return ((bok1 + bok2) / 2) * wys;
}

int main()
{
	float a, b, c;
	cout << "Podaj dlugosc pierwszego boku: ";
	cin >> a;
	cout << "Podaj dlugosc drugiego boku: ";
	cin >> b;
	cout << "Podaj wysokosc: ";
	cin >> c;
	float wynik = poleTrapezu(a, b, c);
	cout << "Pole wynosi " << wynik << endl;

	return 0;
}