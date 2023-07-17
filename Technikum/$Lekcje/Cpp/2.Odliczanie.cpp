#include <iostream>

using namespace std;
int main()
{
    int a;
    
    cout << "Wpisz liczbe: ";

    cin >> a;
    
    while (a > 0) 
    {
        cout << a << endl;
        a--;
    }

    return 0;
}

