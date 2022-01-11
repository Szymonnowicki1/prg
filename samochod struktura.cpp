#include <iostream>
#include <string>
using namespace std;

struct samochod
{
    string marka;
    string model;
    int rok_produkcji;
    float przebieg;
    float cena_wyjsciowa;
    float cena_koncowa;

};

int main()
{
    samochod auto1 = {"BMW", "m5", 2019, 20000, 29000, 200000};
    samochod auto2 = {"AUDI", "q8", 2020, 0, 350000, 300000};
    cout << "marka\tmodel\trok produkcj\tprzebieg\tcena wyjsciowa\tcena koncowa"<<endl;
    cout << auto1.marka<<"\t"<< auto1.model<<"\t"<< auto1.rok_produkcji<<"\t        "<< auto1.przebieg<<"\t        "<< auto1.cena_wyjsciowa<<"\t        "<< auto1.cena_koncowa<< endl;
    cout << auto2.marka<<"\t"<< auto2.model<<"\t"<< auto2.rok_produkcji<<"\t        "<< auto2.przebieg<<"\t        "<< auto2.cena_wyjsciowa<<"\t        "<< auto2.cena_koncowa;

}
