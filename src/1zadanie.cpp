#include <iostream>

int x;
int y;

int main()
{
    std::cout << "Podaj liczbe : ";
    std::cin >> x;
    std::cout << "Podaj nastepna liczbe : ";
    std::cin >> y;
    std::cout << "Wynik dodawania to :" << x + y;
}
