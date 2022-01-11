#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "jaka chcesz wysokosc trojkata : " << endl;
	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		int y = 1;
		for (int j = 0; j < 5; j++)
			cout << " ";
		for (int k = 1; k <= i; k++)
		{
			cout << y << " ";
			y = y * (i - k) / k;
		}
		cout << endl;
	}
	return 0;
}
