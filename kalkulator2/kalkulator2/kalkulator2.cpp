// kalkulator2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
float dodawanie(float zma, float zmb)
{
	return zma+zmb;
}
float odejmowanie(float zma, float zmb)
{
	return zma - zmb;
}
float mnozenie(float zma, float zmb)
{
	return zma*zmb;
}
float dzielenie(float zma, float zmb)
{
	return zma/zmb;
}
float potegowanie(float zma, float zmb)
{
	return pow(zma, zmb);
}

float potegowaniee (float zma, float zmb)
{
	float i, pom=1;
	for (i = 1; i <= zmb; i++)
	{
		pom = pom*zma; 
	};
	return pom;
}
float pierwiastkowanie(float zma, float zmb)
{
	if (zmb == 0)
	{
		cout << "sprobuj jeszcze raz" << endl;
		return 1;
	}
	else
	{

		return pow(zma, (1 / zmb));
	}
}
float procenty(float zma, float zmb)
{
	return (zma*zmb) / 100;
}
float ulamek(float zma)
{
	if (zma == 0)
	{
		cout << "Nie dziel przez 0" << endl;
		return 1;
	}
	else
	{
		return 1 / zma; 
	}
}
int main()
{
	float a = 0, b = 0, c = 0;
	char dzialanie;
	cout << "podaj dzialanie: \n1-dodawanie \n2-odejmowanie, 3-mnozenie, 4-dzielenie, 5-potegowanie, 6-potegowanie', 7-pierwiastkowanie, 8-procenty, 9- 1/x " << endl;
	cin >> dzialanie;

	switch (dzialanie)
	{
	case'1':
		cout << "podaj zmienna a" << endl;
		cin >> a;
		cout << "podaj zmienna b" << endl;
		cin >> b;
		c = dodawanie(a, b);
		cout << "Wynik:" << c << endl;
		return 0;

	case'2':
		cout << "podaj zmienna a" << endl;
		cin >> a;
		cout << "podaj zmienna b" << endl;
		cin >> b;
		c = odejmowanie(a, b);
		cout << "Wynik:" << c << endl;
		return 0;

	case'3':
			cout << "podaj zmienna a" << endl;
			cin >> a;
			cout << "podaj zmienna b" << endl;
			cin >> b;
			c = mnozenie(a, b);
			cout << "Wynik:" << c << endl;
			return 0;

	case'4':
		cout << "podaj zmienna a" << endl;
		cin >> a;
		cout << "podaj zmienna b" << endl;
		cin >> b;
		if (b == 0)
		{
			cout << "Nie dziel przez 0" << endl;
			return 1;
		}
		else
		{
			c = dzielenie(a, b);
			cout << "Wynik:" << c << endl;
			return 0;
		}

	case'5':
		cout << "podaj zmienna a" << endl;
		cin >> a;
		cout << "podaj stopien potegi" << endl;
		cin >> b;
		c = potegowanie(a, b);
		cout << "Wynik:" << c << endl;
		return 0;

	case'6':
		cout << "podaj zmienna a" << endl;
		cin >> a;
		cout << "podaj stopien potegi" << endl;
		cin >> b;
		c = potegowaniee(a, b);
		cout << "Wynik:" << c << endl;
		return 0;

	case'7':
		cout << "podaj zmienna a" << endl;
		cin >> a;
		cout << "podaj stopien pierwiastka" << endl;
		cin >> b;
		c = pierwiastkowanie(a, b);
		cout << "Wynik:" << c << endl;
		return 0;
	case'8':
		cout << "podaj wartosc" << endl;
		cin >> a;
		cout << "podaj procent" << endl;
		cin >> b;
		c = procenty(a, b);
		cout << "Wynik:" << c << endl;
		return 0;
	case'9':
		cout << "podaj wartosc" << endl;
		cin >> a;
		c = ulamek(a);
		cout << "Wynik:" << c << endl;
		return 0;
	}
	
}

