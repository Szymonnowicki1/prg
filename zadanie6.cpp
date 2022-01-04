#include <iostream>

using namespace std;
int is_divisible(int liczba, int dzielnik)
{
    if(liczba % dzielnik == 0)
    {
        cout <<"Pierwszy argument jest podzielny przez drugi";
    }
    else
    {
        cout <<"Pierwszy argument nie jest podzielny przez drugi";
    }
}
int main()
{
    cout <<is_divisible(2, 3);
}
