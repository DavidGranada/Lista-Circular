/*
=======================================================
UNIVERSIDAD DE LAS FUERZAS ARMADAS - "ESPE"
=======================================================
Departamento Ciencias De La Computación
=======================================================
Tema:			LISTA CIRCULAR CON CLASES
Carrera:		Ingeniería en Sistemas
Docente:		Ing. Fernando Solis
Integrantes:	Granada David
Conejo Ivan
Francisco Sampedro
=======================================================
Fecha Creación:		12/12/2017
Fecha Modificación:	12/12/2017
=======================================================
MENU LISTA CIRCULAR - CON CLASES
=======================================================
*/
#include"ListaCircular.h"

int main()
{
	Nodo *n = NULL;
	ListaCircular Lista;
	int opc;
	int num;
	do
	{
		system("cls");
		cout << "\n";
		cout << "\n\tLISTAS CIRCULARES...\nElija una opcion\n" << endl;
		cout << "[1] Insertar al inicio" << endl;
		cout << "[2] Insertar entre nodos" << endl;
		cout << "[3] Numero de elementos insertados" << endl;
		cout << "[4] Imprimir" << endl;
		cout << "[5] Eliminar dato" << endl;
		cout << "[6] Buscar dato" << endl;
		cout << "[7] Salir" << endl << endl;
		cout << "Opcion: ";
		cin >> opc;
		cout << endl;

		switch (opc)
		{
		case 1:
		{
				  if (Lista.estaVacia())
					  cout << "La lista esta vacia, ingrese valores" << endl << endl;
				  cout << endl << "Ingrese un nuevo valor: ";
				  cin >> num;
				  Lista.Insertar(num);
				  cout << "Ha insertado el valor: " << num;
				  cout << endl << endl << "Lista actual:" << endl;
				  Lista.Imprimir();
				  cout << endl;
				  _getch();
		}break;

		case 2:
		{
				  if (Lista.estaVacia())
					  cout << "La lista esta vacia, no hay valores antes.!" << endl << endl;
				  else
				  {
					  Lista.Imprimir();
					  cout << endl << endl;
					  Lista.InsertarEntreNodos();
					  cout << endl << endl << "Lista actual:" << endl;
					  Lista.Imprimir();
					  cout << endl;
				  }
				  _getch();

		}break;

		case 3:
		{
				  if (Lista.estaVacia())
					  cout << "La lista esta vacia..." << endl << endl;
				  cout << Lista.TamanioLista() << endl << endl;
				  cout << "Verificando..." << endl;
				  cout << "Esta es la lista:" << endl;
				  Lista.Imprimir();
				  _getch();
		}
			break;

		case 4:
		{
				  if (Lista.estaVacia())
					  cout << "La lista esta vacia..." << endl << endl;
				  else
					  Lista.Imprimir();
				  _getch();
		}
			break;

		case 5:
		{
				  if (Lista.estaVacia())
					  cout << "La lista esta vacia..." << endl << endl;
				  else
				  {
					  cout << endl << "Lista actual:" << endl;
					  Lista.Imprimir();
					  cout << endl;
					  cout << endl << "Ingrese el valor a eliminar: ";
					  cin >> num;
					  Lista.Eliminar(num);
					  cout << "La nueva lista es:" << endl;
					  Lista.Imprimir();
				  }
				  _getch();
		}break;
		case 6:
		{
				  if (Lista.estaVacia())
					  cout << "La lista esta vacia..." << endl << endl;
				  else
				  {
					  cout << "Ingrese dato a buscar: ";
					  cin >> num;
					  Lista.BuscarNodo(num);
					  cout << endl << endl;;
					  cout << "Verificando..." << endl;
					  cout << "Esta es la lista:" << endl;
					  Lista.Imprimir();
				  }
				  _getch();
		}break;
		case 7:
		{
				  cout << "Presione enter para salir..." << endl;
		}break;
		default:
		{
				   cout << endl << "Opcion no Valida";
				   _getch();
		}break;
		}
		cout << endl;
	} while (opc != 7);

	_getch();
	return 0;
}