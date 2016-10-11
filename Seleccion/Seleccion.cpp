// Seleccion.cpp: archivo de proyecto principal.

#include "stdafx.h"

using namespace System;
using namespace std;

struct nodo {
	int dato;
	struct nodo *sgte;
};
typedef struct nodo *Tlista;
Tlista lista = NULL;
void menu();
void generarLista(Tlista &lista, int n);
void mostrar(Tlista lista);
void ordenarSeleccion(Tlista &lista);


int main()
{
	menu();
	system("pause");
}

void menu() {
	int opc = 0, dimen;
	cout << "\t\t\t��������������������������ͻ" << endl;
	cout << "\t\t\t�        SELECCION         �" << endl;
	cout << "\t\t\t��������������������������͹" << endl;
	cout << "\t\t\t�                          �" << endl;
	cout << "\t\t\t�    1.Generar Lista       �" << endl;
	cout << "\t\t\t�    2.Ordenar Seleccion   �" << endl;
	cout << "\t\t\t�    3.Mostrar             �" << endl;
	cout << "\t\t\t�                          �" << endl;
	cout << "\t\t\t��������������������������ͼ" << endl;
	cout << "Ingrese una opcion:"; cin >> opc;
	do {
		switch (opc) {
		case 1: cout << "Ingrese la dimension de la lista: ";
			cin >> dimen;
			generarLista(lista, dimen); break;
		case 2: ordenarSeleccion(lista); break;
		case 3: mostrar(lista); break;
		}
	} while (opc != 4);
}

void generarLista(Tlista &lista, int n) {
	Tlista nuevo;
	for (int i = 0; i<n; i++) {
		nuevo = new(struct nodo);
		nuevo->sgte = NULL;
		nuevo->dato = rand() % 101;
		if (lista == NULL)
			lista = nuevo;
		else {
			nuevo->sgte = lista;
			lista = nuevo;
		}
	}
	cout << "LIsta generada" << endl;
	system("pause");
	system("cls");
	menu();
}

void mostrar(Tlista lista) {
	Tlista p;
	p = lista;
	while (p != NULL) {
		cout << p->dato << "->" << " ";
		p = p->sgte;
	}
	cout << "NULL" << endl;
	system("pause");
	system("cls");
	menu();
}

void ordenarSeleccion(Tlista &lista) {
	bool interruptor = false;
	int min;
	Tlista q = lista, p = lista, aux;
	aux = new(struct nodo);
	aux = NULL;
	do {
		interruptor = false;
		min = q->dato;
		p = q->sgte;
		do {
			if (min > p->dato) {
				interruptor = true;
				aux = p;
				min = aux->dato;
			}
			p = p->sgte;
		} while (p != NULL);
		if (interruptor) {
			aux->dato = q->dato;
			q->dato = min;
		}
		q = q->sgte;
	} while (q->sgte != NULL);
	cout << "Lista ordenada por seleccion:" << endl;
	mostrar(lista);

	menu();
}



