#include<iostream>
#include<conio.h>


using namespace std;

class Nodo
{
private:
	int dato;
	Nodo* enlace;
public:
	Nodo();
	Nodo(int d);
	int getDato();
	Nodo* getEnlace();
	void setDato(int d);
	void setEnlace(Nodo* n);
};