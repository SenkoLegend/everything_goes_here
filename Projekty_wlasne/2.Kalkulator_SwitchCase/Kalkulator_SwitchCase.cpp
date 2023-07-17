#include <iostream>

using namespace std;
int main()
{
    int operation = 0;
    double a, b;

    while (true)
    {
        operation = 0;
        a, b = 0;

        system("cls");
        cout << "Operacja:\n 1.+\n 2.-\n 3.*\n 4./ \n";
        cin >> operation;
        cout << "Prosze podac liczbe a:\n";
        cin >> a;
        cout << "Prosze podac liczbe b:\n";
        cin >> b;

        switch (operation)
        {
            case 1:
                cout << "Wynik: " << a + b << endl;
                system("pause");
                break;
            case 2:
                cout << "Wynik: " << a - b << endl;
                system("pause");
                break;
            case 3:
                cout << "Wynik: " << a * b << endl;
                system("pause");
                break;
            case 4:
                cout << "Wynik: " << a / b << endl;
                system("pause");
                break;
            default:
                cout << "Prosze podac wlasciwa operacje!\n";
                system("pause");
                break;
        }
    }
    
}
