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
bool busquedaTern(int vector[], int x, int primero, int ultimo)
{
	if(primero <= ultimo)
	{
		int tam = 1 + ultimo - primero;
		int inferior = primero + tam / 3;
		int superior = primero + (tam * 2) / 3;

		if(vector[inferior] == x)
		{
			return true;
		}
		else if(vector[inferior] > x)
		{
			return busquedaTern(vector, x, primero, inferior - 1);
		}
		else
		{
			if(vector[superior] == x)
				return superior;
			else if(vector[superior] < x)
				return busquedaTern(vector, x, superior + 1, ultimo);
			else
				return busquedaTern(vector, x, inferior + 1, superior - 1);

		}
	}
	else
		return false;

}

int main(int argc,char **argv)
{

	int vector[] = {1,2,3,4,5,6,7,8,9,11,23,25,32,45};
	//int pepe= atoi(argv[1]);
	int pepe;
	cin>>pepe;
	bool yeah = busquedaTern(vector,(int) pepe,0,13);
	int tamArray=(sizeof(vector)/sizeof(*vector));
	cout<<"Tamaño de array vector[]: "<<tamArray<<"\n";
	cout<<"Los Elementos de array son: ";
	for (int i = 0; i < tamArray; ++i)
	{
		cout<<vector[i]<<" ";
	}
	cout<<"\nElemento buscado: "<<pepe<<endl;
	if (yeah)
		cout<<"El elemento "<< pepe<<" existe en el array\n";
	else
		cout<<"No pertenece al array\n";

	return 0;
}
