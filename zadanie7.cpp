#include <iostream>
#include <string>
using namespace std;
int count_chars(string x, char y)
{
    int licznik = 0;

    for (int i = 0; i < x.length();i++)
    {
        if(x[i]==y)
        {
            licznik++;
        }

    }
    return licznik;
}

int main()
{
    cout << count_chars("szymyyon", 'y');
}
