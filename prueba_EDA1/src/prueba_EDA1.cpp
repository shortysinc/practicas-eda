//============================================================================
// Name        : prueba_EDA1.cpp
// Author      : Jorge
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


// f u n sumaVec ( i n t v [ ] , i n t num) r e t u r n i n t r
int sumaVec ( int v[], int num ) {
	// Pre : longitud(v) ≥ num ≥ 0
	int r;
	if ( num <= 0 )
		r = 0;
	else if ( num > 0 )
		r = sumaVec(v, num-1) + v[num-1];
	return r;
// P o s t : r = i : 0 ≤ i < num : v[i]
}

bool noEstaEnElArray(int v [], int num, int tam)
{
	int i=0;
	bool encontrado=false;
	while (i<tam && !encontrado)
	{
		if (v[i]==num)
		{
			return encontrado=true;
		}
		else
			i++;
	}
	return false;
}

int main()
{
	int vector[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int tamVector = (sizeof(vector)/sizeof(*vector));
	int numerobuscado,suma;
	cout<<"Elemento buscado: ";
	cin>>numerobuscado;
	if((noEstaEnElArray(vector,numerobuscado,tamVector)))
	{
		suma=sumaVec(vector, numerobuscado);
		cout<<suma<<endl;
	}
	else
	{
		cout<<"El numero no se encuentra en el vector";
	}
//	int aux=0;
//	for (int i = 0; i < tamVector; ++i) {
//		aux=vector[i]+aux;
//
//	}
//	cout<<aux<<endl;

	return 0;
}

