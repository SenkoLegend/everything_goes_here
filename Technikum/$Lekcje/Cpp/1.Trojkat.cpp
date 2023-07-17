#include <iostream>

using namespace std;

int main()
{
     int a, b, c;
     cout << "Podaj boki: ";
     cin >> a >> b >> c;
     if (a + b > c && c + a > b && c + b > a)
     {
         cout << "To trojkat." << endl;
         if (a > b)
         {
             if (a > c)
             {
                 if (c * c + b * b == a * a)
                     cout << "To jest trojkat prostokatny." << endl;
             }
             else
             {
                 if (a * a + b * b == c * c)
                     cout << "To jest trojkat prostokatny." << endl;
             }
         }
         else {
             if (b > c)
             {
                 if (c * c + a * a == b * b)
                     cout << "To jest trojkat prostokatny." << endl;
             }
             else {
                 if (b * b + a * a == c * c)
                     cout << "To jest trojkat prostokatny." << endl;

         }
         }

     }
     else {
         cout << "To nie trojkat." << endl;
     }
}