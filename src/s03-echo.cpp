#include <iostream>
#include <string>

using namespace std;

string text;


int main()
{
cout << "podaj argument: " << endl;

    do
    {
        string lane;
        getline(cin,lane);
        if(lane.empty())
        {
            break;
        }
        else
        {
            text+=lane;
        }

    }while(true);
    for(int i = 0;i<text.length();i++)
    {
        cout << text[i]<<" ";
    }
}
