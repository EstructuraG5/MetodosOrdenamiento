// Seleccion.cpp: archivo de proyecto principal.

#include "stdafx.h"

using namespace System;
using namespace std;
struct nodo {
	int dato;
	struct nodo* siguiente;
};
typedef nodo* Tlista;
Tlista lista = NULL;

void menu();
void insertar_inicio(Tlista &lista, int dato);
void insertar_final(Tlista &lista);
void Seleccion(Tlista &lista);
void mostrar(Tlista &lista);


int main()
{
	menu();
}

void menu() {
	system("cls");
	int opc;
	cout << "\t\t\tษออออออออออออออออออออออออออป" << endl;
	cout << "\t\t\tบ        ORDENAMIENTO      บ" << endl;
	cout << "\t\t\tฬออออออออออออออออออออออออออน" << endl;
	cout << "\t\t\tบ                          บ" << endl;
	cout << "\t\t\tบ    1.Insertar Datos      บ" << endl;
	cout << "\t\t\tบ    2.Seleccion           บ" << endl;
	cout << "\t\t\tบ    3.Mostrar             บ" << endl;
	cout << "\t\t\tบ    4.Salir               บ" << endl;
	cout << "\t\t\tบ                          บ" << endl;
	cout << "\t\t\tศออออออออออออออออออออออออออผ" << endl;

	cout << "\t\t\tIngrese una opcion : ";
	cin >> opc;
	cout << endl;
	switch (opc) {
	case 1:
		insertar_final(lista);
		break;
	case 2:
		Seleccion(lista);
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

void insertar_inicio(Tlista &lista, int dato) {
	Tlista nuevo;
	nuevo = new(struct nodo);
	nuevo->dato = dato;
	nuevo->siguiente = NULL;
	lista = nuevo;

}

void insertar_final(Tlista &lista) {
	cout << "Ingrese el dato que desee agregar :";
	int dato;
	cin >> dato;

	Tlista p, q = lista;
	p = new(struct nodo);
	p->dato = dato;
	p->siguiente = NULL;

	if (lista == NULL) {
		insertar_inicio(lista, dato);
	}
	else {
		while (q->siguiente != NULL) {
			q = q->siguiente;
		}
		q->siguiente = p;
	}
	system("PAUSE");
	system("cls");
	menu();
}

void mostrar(Tlista &lista) {
	Tlista p = lista;
	cout << "La lista es la siguiente  : " << endl;
	while (p != NULL) {
		cout << p->dato << " ";
		p = p->siguiente;
	}
	cout << endl;
	system("PAUSE");
	system("cls");
	menu();
}

void Seleccion(Tlista &lista) {
	Tlista q = lista, p = lista;
	int min;
	Tlista aux = NULL;
	bool encontrado = true;
	do {
		encontrado = false;
		min = q->dato;
		p = q->siguiente;
		do {
			if (min>p->dato) {
				aux = p;
				min = aux->dato;
			}
			p = p->siguiente;
		} while (p != NULL);
		aux->dato = q->dato;
		q->dato = min;
		q = q->siguiente;
	} while (q->siguiente != NULL);

	cout << "LISTA ORDENADA!!!" << endl;
	system("pause");
	system("cls");
	menu();
}

