// CPPTraining.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//
#include "stdafx.h"
#include "stdio.h"
#include <iostream>


using namespace std;
int globalna;
const int dsa = 123;

int suma(int a, int b);

int main()
{
	printf("Podaj a: ");
	int znakA = 0;
		znakA = (int)getchar();
	cout << "Podaj b!" << endl;
	int znakB = 0;
	znakB = (int)getchar();
	//cin >> znakB;
	int c = 0;
	
	c >> suma(znakA, znakB);
	printf("%d",c);

	getchar();
	getchar();
	getchar();
	return 0;
}



int suma(int a, int b)
{
	int suma = a + b;
	return suma;
}

