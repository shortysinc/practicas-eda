//============================================================================
// Name        : Pr12_EDA.cpp
// Author      : Jorge
//============================================================================

/*
 Dada una lista de numeros naturales ordenada de forma creciente, disena
 un algoritmo recursivo que determine si cierto elemento pertenece
 a la lista haciendo una busqueda ternaria.*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


bool buscaBin( int v[], int x, int principio, int fin) {

	bool res;
	if(principio <= fin)
	{
		int m = (principio + fin)/2;
		if(x < v[m])
			res = buscaBin(v, principio, m-1, x);
		else if(x > v[m])
			res = buscaBin(v, m+1, fin, x);
		else
			res = true;
	}
	else
		res = false;
	return res;
}

/**
 * Básicamente, la idea, es hacer una búsqueda partiendo el array en tres en vez de dos
 */
bool busquedaTern(int v[], int x, int primero, int ultimo)
{
	if(primero <= ultimo)
	{
		int tam = 1 + ultimo - primero;
		int inferior = primero + tam / 3;
		int superior = primero + (tam * 2) / 3;

		if(v[inferior] == x)
		{
			return true;
		}
		else if(v[inferior] > x)
		{
			return busquedaTern(v, x, primero, inferior - 1);
		}
		else
		{
			if(v[superior] == x)
				return superior;
			else if(v[superior] < x)
				return busquedaTern(v, x, superior + 1, ultimo);
			else
				return busquedaTern(v, x, inferior + 1, superior - 1);

		}
	}
	else
		return false;

}

int main(int argc,char **argv)
{

	int a[] = {1,2,3,4,5,6,7,8,9,11,23,25,32,45};
	int pepe= atoi(argv[1]);
	bool yeah = busquedaTern(a,(int) pepe,0,13);
	int tamArray=(sizeof(a)/sizeof(*a));
	cout<<"Tamaño de array a[]: "<<tamArray<<"\n";
	cout<<"Elemento buscado: "<<pepe<<endl;
	if (yeah)
		cout<<"El elemento "<< pepe<<" existe en el array\n";
	else
		cout<<"No pertenece al array\n";

	return 0;
}
