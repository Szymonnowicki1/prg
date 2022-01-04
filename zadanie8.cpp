#include <iostream>
#include <string>

using namespace std;
void cos( string y, int x)
{
    string tekst;

    for (int i = 0; i < y.length(); i+=x)
    {
        tekst += y[i];
    }
    cout << tekst <<endl;
}

int main()
{
    cos("szymon", 2);
}
