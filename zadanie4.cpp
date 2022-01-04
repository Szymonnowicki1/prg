#include <iostream>
#include <string>
using namespace std;
int main()
{
    string imie;
    for (int i = 1;i < 6;i++)
    {


    cout << "Podaj imie: ";
    cin >> imie;

    if (imie[imie.length() - 1] == 'a' || imie[imie.length() - 1] == 'A')
        cout << "Imie " << imie << " jest zenskie!" <<endl;
    else
        cout << "Imie " << imie << " jest meskie!" <<endl;
    }


    return 0;
}





