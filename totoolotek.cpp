#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tab[6];
    cout << "Podaj 6  liczb  od 1 - 10" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Podaj " << i+1 << " liczbe:";
        cin >> tab[i];
    }
    srand(time(NULL));
    int losowanie[6];
    bool powtorzenia;
    for ( int i = 0; i < 6; i++)
    {
        powtorzenia = true;
        while(powtorzenia)
        {
            powtorzenia = false;
            los[i] = rand()%10 + 1;
            for (int j = 0; j < i; j++)
              if (los[i] == losowanie[j])
                {
                  powtorzenia = true;
                   break;
                }

        }

    }
    cout << "Wylosowane liczby to:" << endl;
    for ( int i = 0; i < 6; i++)
    cout << losowanie[i] << " ";
    int licznik = 0;
    for (int i = 0; i < 6; i++)
    for (int j = 0; j < 6; j++)
    if (tab[i]== losowanie[j])
    {
       licznik++;
       break;
    }
    cout << "Wytypowales dobrze " << licznik << " liczb\n";
    return 0;
}
