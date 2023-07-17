#include <iostream>
#include <string>

using namespace std;

void wyswietlUcznia(string imieUcznia, string klasa, int nrWDzienniku)
{
	cout << "Uczen technikum ZSE " << imieUcznia << " z klasy " << klasa << " o nr w dzienniku " << nrWDzienniku << endl;
	cout << "Jest entuzjasta programowania" << endl;
}

int main()
{
	wyswietlUcznia("Jan Kowalski", "2D", 21);
	wyswietlUcznia("Michal Nowak", "1A", 23);
	wyswietlUcznia("Adam Stepien", "2F", 12);

	system("pause");

	return 0;
}