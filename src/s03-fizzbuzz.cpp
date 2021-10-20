#include <iostream>

int liczba;

int main()
{
std::cout<<"podaj liczbe: ";
std::cin>>liczba;
for(int i = 1; i<=liczba ;i++){
if(i %3 == 0 && i %5 == 0 )
{
std::cout<<i<<"fizzbuzz";
}
else if(i %3 == 0)
{
std::cout<< i <<"fizz";
}
else if (i %5 == 0)
{
std::cout<<i<<"buzz";
}
}
return 0;
}
