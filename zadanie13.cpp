#include <iostream>
#include <vector>

using namespace std;

int dot_product(vector<int> x, vector<int> y)
{
    int iloczyn = 0;
    if(x.size() == y.size())
    {
        for(auto i = 0; i <x.size(); i++)
        {
            iloczyn += x[i] * y[i];
        }
        return iloczyn;
    }
    else
    {
        cout << "inna dlugosc wektorow";
        return 0;
    }
}
int main()
{
    auto q = vector<int>{2,6,9,5};
    auto v = vector<int>{4,6,1,1};
    cout << dot_product(q, v);
    return 0;
}
