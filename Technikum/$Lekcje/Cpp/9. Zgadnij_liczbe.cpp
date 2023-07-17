#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rng, w, i;

int main()
{
	srand(time(NULL));
	rng = rand() % 1000 + 1;

	for (i = 0; i < 9; i++)
	{
		cout << "Zostalo ci prob: " << 9 - i << endl;
		cin >> w;
		if (w == rng)
		{
			cout << "Brawo zgadles." << endl;
			break;
		}
		else if (w > rng)
			cout << "Za duzo" << endl;
		else if (w < rng)
			cout << "Za malo" << endl;
	}
	return 0;
}