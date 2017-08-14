// tablica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int* uzup(int element1,int element2,int* tablica)
{
	
	tablica[0] = element1;
	tablica[1] = element2;
	for (int i = 2; i < 10; i++)
	{
		tablica[i] = tablica[i - 1] + tablica[1] - tablica[0] ;
	}
	return tablica; 
}
double policzSrednia(int* tablica )
{
	double srednia = 0;

	for (int i = 0; i < 10; i++)
	{
		srednia = (tablica[i] + srednia);
	}
	srednia = srednia / (10);
	return srednia;
}
double policzSrednia2(int*tablica)
{
	double srednia2 = 0;
	srednia2 = (tablica[0] + tablica[9]) * 10 / 2;
	srednia2 = srednia2 / 10;
	return srednia2;
}
//test
int policzSume(int*tablica)
{
	int suma = 0;
	suma= (tablica[0] + tablica[9]) * 10 / 2;
	return suma;
}

int main()
{
	int element1, element2;
	cout << "podaj pierwszc warosc:" << endl;
	cin >> element1;
	cout << "podaj druga wartosc:" << endl;
	cin >> element2;
	int tablica[10];
		int *tab = uzup(element1,element2, tablica);
		cout << (sizeof(tablica)/sizeof(*tablica)) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << tablica[i] << endl;
	}
	double srednia = 0;
	srednia = policzSrednia(tablica);
	int suma = policzSume(tablica);
	double srednia2 = 0;
	srednia2 = policzSrednia2(tablica);

	cout << srednia << endl;
	cout << srednia2 << endl;
	cout << suma << endl;

	return 0;
}

