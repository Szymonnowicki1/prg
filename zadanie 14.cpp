#include <iostream>
#include <vector>

using namespace std;

struct student
{
    string imie;
    string nazwisko;
    vector<int> oceny;
};

float average_of(student x)
{
    float suma = 0;
    for(int i = 0; i < x.oceny.size(); i++)
    {
        suma+=x.oceny[i];
    }
    return suma / x.oceny.size();
}
int main()
{
    student stu;
    stu.imie = "Szymon";
    stu.nazwisko = "Nowicki";
    stu.oceny = {2, 4, 5, 3};
    cout << average_of(stu);
    return 0;
}
