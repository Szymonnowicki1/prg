#include <iostream>
#include <vector>

using namespace std;

struct grupa
{
    string nazwa;
    vector<string>studenci;
};

void dodaj_studenta(grupa x, string y)
{
    auto studs = x.studenci;
    studs.push_back(y);
}
int main()
{
    grupa grupaa;
    grupaa.nazwa = "Esportowcy";
    grupaa.studenci = {"Szymon", "jan"};
    auto studs = grupaa.studenci;
    dodaj_studenta(grupaa, "Nowicki");
    return 0;
}
