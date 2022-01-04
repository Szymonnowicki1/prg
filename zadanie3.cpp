#include <iostream>
#include <string>
using namespace std;

string imie, imie2;

int main()
{
    cout << "Podaj imie : ";
    cin >> imie;
    cout << "Podaj drugie imie :";
    cin >> imie2;

    if (imie.length() > imie2.length())
    {
        cout << "pierwsze imie jest dluzsze!";
    }
    else if (imie2.length() > imie.length())
    {
        cout << "drugie imie jest dluzsze...";
    }
    else if (imie2.length() == imie.length())
    {
        cout << "imiona maja taka sama dlugosc.";
    }
}
