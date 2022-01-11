#include <iostream>

using namespace std;

void x1(int);
void x2(int);
void x3(int);
void x4(int);

int main()
{
    char z;
    int z1;

    cout << "Podaj wariant macierza (1,2,3,4) " << endl;
    cin >> z;
    cout << "Podaj wielkosc macierza (1-10)" << endl;
    cin >> z1;

    switch (z)
    {
    case '1':
        x1(z1);
        break;
    case '2':
        x2(z1);
        break;
    case '3':
        x3(z1);
        break;
    case '4':
        x4(z1);
        break;
    default:
        cout << "blad";
        break;

    }
    return 0;
}
void x1(int a)
{
    for (int y = 1; y <= a; y++)
    {
        int cos = y;
        for (int x = 0; x < a; x++)
        {
            cout << cos << " ";
            cos++;
        }
        cout << endl;
    }
}
void x2(int a)
{
    int val = a;
    for (int y = 1; y <= val; y++)
    {
        for (int i = 0; i < val - y; i++)
        {
            cout << "0";
        }
        for (int i = 1; i <= y; i++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void x3(int a)
{
    int val = a;
    int cos = 2;
    for (int y = 1; y <= val; y++)
    {
        for (int x = 2; x <= val * 2; x += 2)
        {
            int cosv = x;
            while (cosv < cos)
            {
                cosv += 2;
            }
            cout << cosv;
        }
        cos += 2;
        cout << endl;
    }
}
void x4(int a)
{
    int val = a;
    for (int y = 0; y < val; y++)
    {
        for (int i = val - y; i > -0; i--)
        {
            cout << i;
        }
        for (int i = 0; i < y; i++)
        {
            cout << "0";
        }
        cout << endl;
    }

}

