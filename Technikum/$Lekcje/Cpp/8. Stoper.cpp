#include <iostream>
#include <iomanip>
#include <thread>
using namespace std;

int main()
{
	int s, m, h;
	s = 0;
	m = 0;
	h = 0;
	while(true)
	{
		system("cls");
		if (m == 60)
		{
			h++;
			m = 0;
		}
		if (s == 60)
		{
			m++;
			s = 0;
		}
		cout << setfill('0') << setw(2) << h << "::";
		cout << setfill('0') << setw(2) << m << "::";
		cout << setfill('0') << setw(2) << s << endl;
		s++;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
	//00:00:00

	return 0;
}
