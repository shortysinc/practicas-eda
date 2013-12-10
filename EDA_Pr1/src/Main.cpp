#include "PilaLE.h"

int main(){
	PilaLE<char> p;
	p.apilar('a');
	p.apilar('b');
	p.apilar('c');
	p.desapilar();
	p.mostrarLista();
	cout<<p.cima()<<" ";
	//cin.get();
	return 0;
}
