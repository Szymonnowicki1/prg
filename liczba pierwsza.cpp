#include<iostream>

using namespace std;
int w;
bool pierwsza(int x)
{
	if(x<2)
		return false;

	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return false;
}

int main()
{

	cout<<"Podaj liczbe: ";
	cin>>w;

	if(pierwsza(w))
		cout<<"Liczba "<<w<<" jest pierwsza"<<endl;
	else
		cout<<"Liczba "<<w<<" nie jest pierwsza"<<endl;

	return 0;
}
