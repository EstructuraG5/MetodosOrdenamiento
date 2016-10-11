// Quick.cpp: archivo de proyecto principal.

#include "stdafx.h"

using namespace System;
using namespace std;
int cont = 0;
struct Nodo {
	int num;
	struct Nodo* siguiente;

};

typedef struct Nodo* Tlista;

Tlista lista = NULL;


void menu();
void Insertar(Tlista &lista);
void mostrar(Tlista lista);
int tamanio(Tlista lista);
int dato(Tlista lista, int tamanio);
void intercambiar(Tlista &lista, int pos, int numero);
void quickSort(Tlista lista, int primero, int ultimo);

int main()
{
	menu();	
}

int tamanio(Tlista lista) {
	int c = 1;
	while (lista->siguiente != NULL) {
		lista = lista->siguiente;
		c++;
	}
	return c;
}

void menu() {
	int opc;
	cout << "\t\t\t\t��������������������������ͻ" << endl;
	cout << "\t\t\t\t�        ORDENAMIENTO      �" << endl;
	cout << "\t\t\t\t��������������������������͹" << endl;
	cout << "\t\t\t\t�                          �" << endl;
	cout << "\t\t\t\t�    1.Insertar Datos      �" << endl;
	cout << "\t\t\t\t�    2.QuickSort           �" << endl;
	cout << "\t\t\t\t�    3.Mostrar             �" << endl;
	cout << "\t\t\t\t�    4.Salir               �" << endl;
	cout << "\t\t\t\t�                          �" << endl;
	cout << "\t\t\t\t��������������������������ͼ" << endl;

	cout << "\t\t\t\tIngrese una opcion : ";
	cin >> opc;
	switch (opc) {
	case 1:
		Insertar(lista);
		break;
	case 2:
		quickSort(lista, 1, tamanio(lista));
		break;
	case 3:
		mostrar(lista);
		break;
	case 4:
		system("EXIT");
		break;
	default:cout << "Opcion invalida" << endl;
		menu();
		break;
	}


}


void mostrar(Tlista lista) {
	Tlista rec = lista;
	cout << "La lista ordenada es : " << endl;
	if (rec == NULL)
		cout << "LISTA VACIA" << endl;
	else
		while (rec != NULL) {
			cout << rec->num << " ";
			rec = rec->siguiente;
		}
	cout << endl;
	system("pause");
	system("cls");
	menu();
}

void Insertar(Tlista &lista) {
	int elem;
	cout << "Ingrese elemento :";
	cin >> elem;
	Tlista nuevo;
	nuevo = new(struct Nodo);
	nuevo->num = elem;
	nuevo->siguiente = NULL;

	if (lista == NULL)
		lista = nuevo;
	else {
		Tlista aux = lista;
		while (aux->siguiente != NULL)
			aux = aux->siguiente;
		aux->siguiente = nuevo;
	}

	cout << "ELEMENTO INGRESADO!" << endl;
	system("pause");
	system("cls");
	menu();
	

}

int dato(Tlista lista, int tamanio) {
	int c = 1;
	while (c != tamanio) {
		lista = lista->siguiente;
		c++;
	}
	return lista->num;
}

void intercambiar(Tlista &lista, int pos, int numero) {
	Tlista aux = lista;
	int c = 1;
	while (c != pos) {
		aux = aux->siguiente;
		c++;
	}
	aux->num = numero;
}

void quickSort(Tlista lista, int primero, int ultimo) {
	int i, j, central, pivote;
	central = (primero + ultimo) / 2;
	pivote = dato(lista, central);
	i = primero;
	j = ultimo;
	do {
		while (dato(lista, i)<pivote)
			i++;
		while (dato(lista, j)>pivote)
			j--;
		if (i <= j) {
			int aux;
			aux = dato(lista, i);
			intercambiar(lista, i, dato(lista, j));
			intercambiar(lista, j, aux);
			i++;
			j--;
		}
	} while (i <= j);

	if (primero<j)
		quickSort(lista, primero, j);
	if (i<ultimo)
		quickSort(lista, i, ultimo);

	cout << "LISTA ORDENADA!!" << endl;
	system("PAUSE");
	system("cls");
	menu();
}