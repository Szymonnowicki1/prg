#include <iostream>
#include <string>

std::string  haslo;
std::string haslo2;
int main()
{
std::cout<<"podaj haslo: ";
std::cin>>haslo;
do
{
std::cout<<"Podaj ponownie haslo:";
std::cin>> haslo2;
}while(haslo !=  haslo2);
std::cout<<"poprawne haslo"<<std::endl; 
}
