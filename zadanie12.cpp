#include <iostream>
#include <vector>

using namespace std;
bool is_palindrome(string);
string filter_palindromes(vector<string> zmienna)
{
    vector<string>w;

    for ( int i = 0; i < zmienna.size(); i++)
    {
        is_palindrome(zmienna[i]);
        if (is_palindrome(zmienna[i]) == 1)
        {
            w.push_back(zmienna[i]);
        }
        else
        {
            continue;
        }
    }
    for (auto i = 0; i <w.size(); i++)
    {
        cout << w[i];
    }
    return " to palindrom";
}


    bool is_palindrome(string x)
    {
        string q;

        for (int i = x.length() - 1; i>=0; i--)
        {
            q +=x[i];
        }
        if (q == (x))
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
    auto cos = vector<string>{"kajak", "samochod"};
    cout << filter_palindromes(cos);
    return 0;
}
