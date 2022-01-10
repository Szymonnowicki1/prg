#include <iostream>
#include <vector>

using namespace std;

auto bubble_sort(std::vector<int>& wektor) -> void
{
    auto cos = true;

    for (auto j = 0; j < wektor.size() && cos; j++)
    {
            cos = false;

        for (auto i = 0; i < wektor.size() - 1; i++)
        {
            if (wektor[i] > wektor[i + 1])
            {
                auto b = wektor[i];
                wektor[i] = wektor[i + 1];
                wektor[i + 1] = b;
                cos = true;
            }
        }
    }
}

void contains_all(vector<int>&a,vector<int>&b)
{

    if (a.size() == b.size())
    {
        bubble_sort(a);
        bubble_sort(b);

        int it = 0;
        int licznik = 0;

        for (int k = 0; k < a.size(); k++)
        {
            it++;
            if (a[k] == b[k])
                licznik++;
            else
                continue;
        }
        if (it == licznik)
        {
            cout << "Wektory sa rowne" << endl;
        }
        else
            cout << "Wektory nie sa takie same" << endl;
    }
    else
        cout << "Wektory sa innej dlugosci" << endl;
}

int main()
{
    vector<int>wektor = { 5,4,3,5,9,5 };
    vector<int>wektor1 = { 7,6,7,7,2,1 };

    contains_all(wektor, wektor1);

    return 0;
}
