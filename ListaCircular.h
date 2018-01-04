#include"Nodo.h"

class ListaCircular
{
private:
	Nodo* cabeza;
public:
	ListaCircular();
	int estaVacia();
	void Insertar(int d);
	void InsertarEntreNodos();
	void BuscarNodo(int d);
	int TamanioLista();
	void Eliminar(int d);
	void Imprimir();
};