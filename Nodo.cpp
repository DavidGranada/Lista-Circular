#include"Nodo.h"

Nodo::Nodo(int d)
{
	dato = d;
	enlace = this;
}
int Nodo::getDato()
{
	return dato;
}
Nodo* Nodo::getEnlace()
{
	return enlace;
}
void Nodo::setDato(int d)
{
	dato = d;
}
void Nodo::setEnlace(Nodo* n)
{
	enlace = n;
}