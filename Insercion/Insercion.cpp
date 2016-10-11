// Insercion.cpp: archivo de proyecto principal.

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
void Insercion(Tlista &lista, int elemento);
void mostrar(Tlista &lista);


int main()
{
	menu();
}

void menu() {
	int opcion = 0, elemento;
	system("cls");
	int opc;
	cout << "\t\t\tษออออออออออออออออออออออออออป" << endl;
	cout << "\t\t\tบ  ORDENAMIENTO INSERCION  บ" << endl;
	cout << "\t\t\tฬออออออออออออออออออออออออออน" << endl;
	cout << "\t\t\tบ                          บ" << endl;
	cout << "\t\t\tบ    1.Insertar Datos      บ" << endl;
	cout << "\t\t\tบ    2.Mostrar ordenado    บ" << endl;
	cout << "\t\t\tบ    3.Salir               บ" << endl;
	cout << "\t\t\tบ                          บ" << endl;
	cout << "\t\t\tศออออออออออออออออออออออออออผ" << endl;

	cout << "\t\t\tIngrese una opcion : ";
	cin >> opc;
	cout << endl;
	switch (opc) {
	case 1: cout << "Ingrese elemento :";
		cin >> elemento;
		Insercion(lista, elemento);
		break;
	case 2: mostrar(lista);
		break;
	case 3: cout << "Salir" << endl;
		break;
	default: cout << "Opcion incorrecta" << endl;
		break;

	}

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

void Insercion(Tlista &lista, int elem) {
	int num;
	Tlista nuevo, inicio = lista;
	nuevo = new(struct nodo);
	nuevo->dato = elem;
	nuevo->siguiente = NULL;

	if (lista == NULL)
		lista = nuevo;
	else {
		Tlista aux = lista, fin = NULL;
		while (aux->siguiente != NULL)
			aux = aux->siguiente;
		aux->siguiente
			= nuevo;
		fin = nuevo;
		while (inicio->siguiente != NULL) {
			if (fin->dato<inicio->dato) {
				num = fin->dato;
				fin->dato = inicio->dato;
				inicio->dato = num;
			}
			inicio = inicio->siguiente;
		}
	}
	cout << "ELEMENTO REGISTRADO!!" << endl;

	system("pause");
	system("cls");
	menu();

}
