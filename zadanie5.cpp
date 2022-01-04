#include <iostream>

using namespace std;

bool is_even(int x)
{
    if (x% 2 ==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout << is_even(18);
}
