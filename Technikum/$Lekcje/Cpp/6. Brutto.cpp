#include <iostream>
using namespace std;

int main()
{
    float a;
    float pd = 0.23f;
    cout << "Podaj cene netto: " << endl;
    cin >> a;

    a = a * pd + a;

    cout << "Cena brutto to: " << endl;
    cout << a;

    return 0;
}
