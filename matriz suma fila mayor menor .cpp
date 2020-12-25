#include"stdafx.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;
using namespace System;

int ingresapositivo()
{
	int num;
	do{
		cout << "ingrese positivo"; cin >> num;
	} while (num <= 1 || num > 10);
	return num;

}

void ingresadatos(int *n, int *m, int **Matriz)
{
	for (int i = 0; i < *n; i++)
	
		for (int j = 0; j < *m; j++)

		{
			cout << "ingresa datos [" << i + 1 << "[]" << j + i << "]:";
			cin >> Matriz[i][j];
		}
		
	
}

void salidadatos(int *n, int *m, int **Matriz)
{
	for (int i = 0; i < *n; i++)

	{
		for (int j = 0; j < *m; j++)
			cout << Matriz[i][j] << " ";
		cout << endl;

	}
}

void operacionfilas(int *n, int *m, int **Matriz)
{

	int suma, menor;
	for (int i = 0; i < *n; i++)
	{
		suma = 0;
		menor = Matriz[i][0];
		for (int j = 0; j < *m; j++)
		{
			suma = suma + Matriz[i][j];
			if (Matriz[i][j] < menor)
				menor = Matriz[i][j];

		}

		cout << "sukma  de la fila " << i + 1 << "es: " << suma << endl;
		cout << "el menor valor de la fila" << i + 1 << " es" << menor;
	}


}

int main()
{

	int n, m;
	n = ingresapositivo();
	m = ingresapositivo();
	int **Matriz;
	Matriz = new int*[n];
	for (int i = 0; i < n; i++)
		Matriz[i] = new int[m];
	
	ingresadatos(&n, &m, Matriz);
		salidadatos(&n, &m, Matriz);
		for (int i = 0; i < n; i++)
			delete[]Matriz[i];
		delete[]Matriz;
		_getch();


}