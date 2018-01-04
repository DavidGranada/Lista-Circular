#include"ListaCircular.h"

ListaCircular::ListaCircular()
{
	cabeza = NULL;
}

int ListaCircular::estaVacia()
{
	if (cabeza == NULL)
		return 1;
	else
		return 0;
}

void ListaCircular::Insertar(int d)
{
	Nodo* nuevo = new Nodo(d);
	if (cabeza != NULL)
	{
		nuevo->setEnlace(cabeza->getEnlace());
		cabeza->setEnlace(nuevo);
	}
	cabeza = nuevo;
}

void ListaCircular::InsertarEntreNodos()
{
	int dato;
	Nodo* actual = cabeza;
	bool encontrado = false;
	cout << "Ingrese dato despues de: ";
	cin >> dato;
	if (actual->getDato() == dato)
		encontrado = true;
	else
	{
		actual = actual->getEnlace();
		while ((actual != cabeza) && (!encontrado))
		{
			encontrado = (actual->getDato() == dato);
			if (!encontrado)
				actual = actual->getEnlace();
		}
	}
	if (encontrado == false)
		cout << "Elemento no encontrado";
	else
	{
		int d = 0;
		cout << "Da el Numero a insertar despues de " << dato << " : ";
		cin >> d;
		Nodo* nuevo = new Nodo(d);
		nuevo->setEnlace(actual->getEnlace());
		actual->setEnlace(nuevo);
	}
}

void ListaCircular::BuscarNodo(int d)
{
	Nodo* actual = cabeza;
	bool encontrado = false;
	if (actual->getDato() == d)
		encontrado = true;
	else
	{
		actual = actual->getEnlace();
		while ((actual!=cabeza) && (!encontrado))
		{
			encontrado = (actual->getDato() == d);
			if (!encontrado)
				actual = actual->getEnlace();
		}
	}
	if (encontrado == false)
		cout << "El elemento no fue encontrado";
	else
		cout << "El elemento fue encontrado";
}

int ListaCircular::TamanioLista()
{
	Nodo* pNodo = cabeza;
	int iContador = 0;
	if (cabeza==NULL)
		iContador=0;
	else
	{
		do
		{
			iContador++;
			pNodo = pNodo->getEnlace();
		} while (pNodo != cabeza);
	}
	cout << "Numeros guardados actualmente: ";
	return iContador;

	}

void ListaCircular::Eliminar(int d)
{
	Nodo* actual;
	bool encontrado = false;
	actual = cabeza;
	while ((actual->getEnlace() != cabeza) && (!encontrado))
	{
		encontrado = (actual->getEnlace()->getDato() == d);
		if (!encontrado)
		{
			actual = actual->getEnlace();
		}
	}
	encontrado = (actual->getEnlace()->getDato() == d);
	// Enlace de nodo anterior con el siguiente
	if (encontrado)
	{
		Nodo* p;
		p = actual->getEnlace(); // Nodo a eliminar
		if (cabeza == cabeza->getEnlace()) // Lista de un nodo
			cabeza = NULL;
		else
		{
			if (p == cabeza)
				cabeza = actual; // el nuevo acceso a la lista es el anterior
			actual->setEnlace(p->getEnlace());
		}
		delete p;
	}
}
void ListaCircular::Imprimir()
{
	Nodo* p;
	if (cabeza != NULL)
	{
		p = cabeza->getEnlace(); // siguiente nodo al de acceso
		cout << "||";
		do {
			cout << p->getDato() << "||";
			p = p->getEnlace();
		} while (p != cabeza->getEnlace());
	}
}