#include "PilaLE.h"
#include <stdio.h>
#include <iostream>

int main(){
	PilaLE<char> p;
	//char SecCaracteres[14]={'(','{','(','[',']',')',')','(','(','[',']',')',')',')'};
	char SecCaracteres[6]={'(','[','|',']',']',')'};
	cout<<"Los cadena introducida es: "<<SecCaracteres<<"\n";
	p.mostrarLista();
	if (p.equilibrado(SecCaracteres))
		cout<<"La cadena es igual";
	else
		cout<<"La cadena no es igual";

	return 0;
}


//({([])}(([])))
