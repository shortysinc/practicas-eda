//============================================================================
// Name        : Pr1_EDA.cpp
// Author      : Jorge
//============================================================================


/*
 Supongamos que un conjunto de numeros naturales se implementa con
 un array. Diseña un algoritmo recursivo que determine si cierto elemento
 pertenece o no al conjunto.
*/
#include <iostream>
#include <stdio.h>
using namespace std;

bool pertenece( int a[],int pos , int num, int numElementos)
{

	if ( a[pos] == num)
		return true;
	else if(pos < numElementos)
		return pertenece(a, pos+1, num, numElementos);

	return false;

}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	bool yeah = pertenece(a,0,10,9);

	if (yeah)
		printf("El elemento existe en el array");
	else
		printf("No pertenece al array");

	cin.get();
	return 0;
}
