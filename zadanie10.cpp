#include <iostream>

using namespace std;

string linia(string slowo)
{
    string zmienna;
    zmienna +="* ";
    zmienna += slowo;
    int x =(8 - zmienna.length()) -2;
    if (x>0)
    {
        for (int i = 0; i <= x ;i++)
    {
        zmienna+=" ";

    }
    }

    zmienna+="*";
    return zmienna;
}



string box_print(string a, string b, string c, string d, string e)
{
    cout <<"********"<<endl;
    cout <<linia(a)<<endl;
    cout <<linia(b)<<endl;
    cout <<linia(c)<<endl;
    cout <<linia(d)<<endl;
    cout <<linia(e)<<endl;
    cout <<"********"<<endl;
}
int main()
{
    cout << box_print("siema","co","tam","u","cb");
}
