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
		int tamanio = 1 + ultimo - primero;
		int terInf = primero + tamanio / 3;
		int terSup = primero + (tamanio * 2) / 3;

		if(v[terInf] == x)
		{
			return true;
		}
		else if(v[terInf] > x)
		{
			return busquedaTern(v, x, primero, terInf - 1);
		}
		else
		{
			if(v[terSup] == x)
				return terSup;
			else if(v[terSup] < x)
				return busquedaTern(v, x, terSup + 1, ultimo);
			else
				return busquedaTern(v, x, terInf + 1, terSup - 1);

		}
	}
	else
		return false;

}

int main()
{

	int a[] = {1,2,3,4,5,6,7,8,9};
	bool yeah = busquedaTern(a,9,0,9);

	if (yeah)
		printf("El elemento existe en el array");
	else
		printf("No pertenece al array");

	return 0;
}
