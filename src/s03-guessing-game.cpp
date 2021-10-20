#include <iostream>
#include <random>	
int liczba ; int strzal;

int main()
{
std::random_device rd;
std::uniform_int_distribution<int> d100 (1,100);
liczba = d100 (rd);
//std::cout << liczba <<std::endl;
do
{
std::cout<< "zgadnij liczbe od 1 do 100 :";
std::cin >> strzal;
if(strzal == liczba)
std::cout<<"zgadles liczbe"<<std:: endl;
else if(strzal>liczba)
std::cout <<"za duza liczba"<<std:: endl;
else if (strzal<liczba)
std::cout<<"za mala liczba"<<std::endl;
}while(strzal!=liczba);
return 0;
}
