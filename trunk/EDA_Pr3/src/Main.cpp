#include "ColasVD.h"
#include <stdio.h>
int main(){
	ColasVD<char> c;

	c.ponDetras('a');
	c.ponDetras('b');
	c.ponDetras('c');
	//c.mostrarCola();
	c.quitaPrim();
	//c.mostrarCola();
	c.ponDetras('b');
	//c.mostrarCola();
	c.quitaPrim();
	c.mostrarCola();
	cout<<c.primero()<<" ";
	return 0;
}
