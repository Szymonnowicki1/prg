#include <iostream>
#include <string>
using namespace std;
string wyraz;
int x,y;
bool is_palindrome(string wyraz)
{
    for(x = 0, y = wyraz.length()-1; x < y; x++, y--)
    {
        if(wyraz[x] != wyraz[y])
            break;
    }
    if (x < y)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    cout << is_palindrome("kajaki");
}
