#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
using namespace std;

int a, b;
char wybor;

int main()
{
 cout << "1-mnozenie"<<
 endl<<  "2-dzielenie"<<
 endl<<  "3-modulo"<<
 endl<<  "4-potegowanie"<<
 endl<<  "5-pierwiastek"<<
 endl<<  "6-dodawanie"<< endl;
 cout << "wybierz co chcesz zrobic: ";
 cin >>wybor;
 switch(wybor)
 {
 case '1':
 cout << "podaj liczbe: "<<endl;
 cin >> a;
 cout << "podaj kolejna liczbe: "<<endl;
 cin >> b;
 cout << a*b;
 break;
 case '2':
 cout << "podaj liczbe: "<<endl;
 cin >> a;
 cout << "podaj kolejna liczbe: "<<endl;
 cin >> b;
 cout << a/b;
 break;
 case '3':
 cout << "podaj liczbe: "<<endl;
 cin >> a;
 cout << "podaj kolejna liczbe: "<<endl;
 cin >> b;
 cout << (a % b);
 break;
 case '4':
 cout << "podaj liczbe: "<<endl;
 cin >> a;
 cout << (a*a);
 break;
 case '5':
 cout << "podaj liczbe: "<<endl;
 cin >> a;
 cout << sqrt(a);
 break;
 case '6':
 cout << "podaj liczbe: "<<endl;
 cin >> a;
 cout << "podaj kolejna liczbe: "<<endl;
 cin >> b;
 cout << a+b;
 break;
 default:
     system("cls");
     main();
 break;
 }
}
