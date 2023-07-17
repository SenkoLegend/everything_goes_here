#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 0;
    cin >> b;
    while (b != 0) {
        a += b;
        cin >> b;
    }
    cout << a << endl;
    return 0;
}

