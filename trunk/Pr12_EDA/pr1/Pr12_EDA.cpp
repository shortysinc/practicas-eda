//============================================================================
// Name        : Pr12_EDA.cpp
// Author      : Jorge
//============================================================================


#include <stdio.h>
#include <iostream>
using namespace std;


int buscaBin( int v[], int x, int principio, int fin) {

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

int main()
{

	int a[] = {1,2,3,4,5,6,7,8,9};
	bool yeah = buscaBin(a,10,0,9);

	if (yeah)
		printf("El elemento existe en el array");
	else
		printf("No pertenece al array");

	return 0;
}
