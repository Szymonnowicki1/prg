#include <iostream>
#include <vector>

using namespace std;
float srednia(vector<int> wektor)
{
    float wynik=0;
    int x;
    for(x=0;x<= wektor.size();x++)
{
    wynik+=wektor[x];
}
    return wynik/wektor.size();
}


int main()
{
    auto w = vector<int>{3,5,2,7,8};
    cout<<srednia(w);
    return 0;
}
