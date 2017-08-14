// kalkulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int suma(int arga, int argb)
{
	return arga + argb;
 }
int dzielenie(int dza, int dzb)
{
	return dza/dzb;
}
int roznica(int ara, int arb)
{
	return ara - arb;
}
int silnia(int sl)
{
	if (sl == 1)
		return 1;
	else
		return sl*silnia(sl - 1);
}

int main()
{
	int a=0, b=0, c=0;
	char dzialanie;
	cout << "Podaj dzialanie (d-dodawanie, o-odejmowanie, z-dzielenia, s-silnia)" << endl;
	cin >> dzialanie;
	if(dzialanie=='s')
	{
		cout << "podaj zmienna a" << endl;
		cin >> a;
		if (a < 1)
		{
			cout << "podaj dodatnia wartosc" << endl;
			return 1;
		}
		c = silnia(a);
	}
	
	else
	{
		cout << "podaj zmienna a" << endl;
		cin >> a;
		cout << "podaj zmienna b" << endl;
		cin >> b;
	}
	if (dzialanie == 'd')
	{
		c = suma(a, b);

	}
	else if (dzialanie == 'o')
	{
		c=roznica(a,b);
	}
	else if (dzialanie == 'z')
	{
		if (b == 0)
		{
			cout << "Nie dziel przez 0" << endl;
			return 1;
		}
		c = dzielenie(a, b);
	}
	cout << "Wynik twojego dzialania to:" << c << endl;
    return 0;
}

