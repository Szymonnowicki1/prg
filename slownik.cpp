#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string>slowo;

string mot;

class slownik
{	public:
	bool dodaj(string);
	void usun(string);
	void szukaj(string);
	void wypisz();
	void alfabet();
};

int main()
{
    slownik z;
	int wybor=0;
	while (wybor != 6)
    {




    cout << "1 = dodaj slowo" << endl;
    cout << "2 = usun slowo" << endl;
    cout << "3 = wyszukaj slowo" << endl;
    cout << "4 = wypisz caly slownik" << endl;
    cout << "5 = sortowanie alfabetycznie" << endl;
    cout << "6 = wyjscie" << endl;
    cin >> wybor;




   switch (wybor)
        {
		case 1:
			cout << "Jakie slowo dodac ? " << endl;
			cin >> mot;
			z.dodaj(mot);
			break;
		case 2:
			cout << "Jakie slowo usunac? " << endl;
			cin >> mot;
			z.usun(mot);
			break;
		case 3:
			cout << "Jakie slowo  wyszukac? " << endl;
			cin >> mot;
			z.szukaj(mot);
			break;
		case 4:
			z.wypisz();
			break;
		case 5:
			z.alfabet();
			break;
		default:
			break;
		}

    }
}

bool slownik::dodaj(string z)
{
	for (int i = 0; i < slowo.size(); i++)
	{
		if (z == slowo[i])
		{
			cout << "Slowo juz istnieje!" << endl;
			return 0;
		}
	}
	slowo.push_back(z);
	cout << "Dodales slowo " << z << " do slownika" << endl;
}
void slownik::usun(string z)
{
	int licznik = 0;
	for (int i = 0; i < slowo.size(); i++)
	{
		if (z == slowo[i])
		{
			slowo.erase(slowo.begin() + i);
			licznik++;
			break;
		}
		else
			continue;
	}
	if (licznik == 1)
		cout << "Usunieto slowo " << z << endl;
	else
		cout << "nie zadzialalo" << endl;

}
void slownik::szukaj(string z)
{
	int prawda = 0;
	for (int i = 0; i < slowo.size(); i++)
	{
		if (z == slowo[i])
		{
			cout << "Znaleziono slowo " << z << endl;
			prawda++;
			break;
		}
	}
	if (prawda != 1)
		cout << "Nie ma slowa "<< z << endl << endl;

}
void slownik::wypisz()
{
	for (int i = 0; i < slowo.size(); i++)
	{
		cout << slowo[i] << endl;
	}
}
void slownik::alfabet()
{
	sort(slowo.begin(), slowo.end());
}
