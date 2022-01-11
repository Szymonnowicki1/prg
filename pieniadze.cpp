#include <iostream>

using namespace std;

int main()
{
	int tab[9] = { 0,0,0,0,0,0,0,0,0 };
	int pieniadze;
	int odlicznie;

	cout << "ile chcesz zaplacic?" << endl;
	cin >> pieniadze;

	odlicznie = pieniadze;

	do
	{

		if (odlicznie>=500)
		{
			tab[0]++;
			odlicznie = odlicznie - 500;
			continue;
		}
		if (odlicznie >= 200)
		{
			tab[1]++;
			odlicznie = odlicznie - 200;
			continue;
		}
		if (odlicznie >= 100)
		{
			tab[2]++;
			odlicznie = odlicznie - 100;
			continue;
		}
		if (odlicznie >= 50)
		{
			tab[3]++;
			odlicznie = odlicznie - 50;
			continue;
		}
		if (odlicznie >= 20)
		{
			tab[4]++;
			odlicznie = odlicznie - 20;
			continue;
		}
		if (odlicznie >= 10)
		{
			tab[5]++;
			odlicznie = odlicznie - 10;
			continue;
		}
		if (odlicznie >= 5)
		{
			tab[6]++;
			odlicznie = odlicznie - 5;
			continue;
		}
		if (odlicznie >= 2)
		{
			tab[7]++;
			odlicznie = odlicznie - 2;
			continue;
		}
		if (odlicznie >= 1)
		{
			tab[8]++;
			odlicznie = odlicznie - 1;
			continue;
		}
	} while (odlicznie != 0);

	cout << "Potrzebujesz " << tab[0] << " banknotow o nominale 500zl" << endl;
	cout << "Potrzebujesz " << tab[1] << " banknotow o nominale 200zl" << endl;
	cout << "Potrzebujesz " << tab[2] << " banknotow o nominale 100zl" << endl;
	cout << "Potrzebujesz " << tab[3] << " banknotow o nominale 50zl" << endl;
	cout << "Potrzebujesz " << tab[4] << " banknotow o nominale 20zl" << endl;
	cout << "Potrzebujesz " << tab[5] << " banknotow o nominale 10zl" << endl;
	cout << "Potrzebujesz " << tab[6] << " monet o nominale 5zl" << endl;
	cout << "Potrzebujesz " << tab[7] << " monet o nominale 2zl" << endl;
	cout << "Potrzebujesz " << tab[8] << " monet o nominale 1zl" << endl;


	return 0;
}
