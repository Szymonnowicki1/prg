#include <iostream>

using namespace std;



int main()
{
    {

        int x;

        cout << "podaj wysokosc choinki : " << endl;
        cin >> x;

        int w = 1 + 2 * (x - 2);
        int lp, rp;
        lp = w / 2;
        rp = lp;
        for (int y = 0; y < x; y++)
        {
            if ((y == 0)||(y == x - 1))
            {
                for (int i = 0; i < w; i++)
                {
                    cout << "*";
                }
            }
            else
            {
                for (int i = 0; i < w; i++)
                {
                    if ((lp > i) || (i > rp))
                        cout << "*";
                    else
                        cout << " ";
                }
                lp--;
                rp++;
            }

            cout << endl;
        }

    }

    return 0;
}
