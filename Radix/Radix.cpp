// Radix.cpp: archivo de proyecto principal.

#include "stdafx.h"

using namespace System;
using namespace std;

struct Nodo {
	int dato;
	struct Nodo* sgte;
};

typedef struct Nodo* Tlista;
Tlista lista = NULL, lista0 = NULL, lista1 = NULL, lista2 = NULL,
lista3 = NULL, lista4 = NULL, lista5 = NULL, lista6 = NULL,
lista7 = NULL, lista8 = NULL, lista9 = NULL;

void menu();
void insertarDatos(Tlista &lista);
void mostrar(Tlista lista);
int pot(int base, int exp);
void insertarLista0(Tlista &lista0);
void insertarLista1(Tlista &lista1);
void insertarLista2(Tlista &lista2);
void insertarLista3(Tlista &lista3);
void insertarLista4(Tlista &lista4);
void insertarLista5(Tlista &lista5);
void insertarLista6(Tlista &lista6);
void insertarLista7(Tlista &lista7);
void insertarLista8(Tlista &lista8);
void insertarLista9(Tlista &lista9);
void Radix(Tlista &lista);
void llenar(Tlista &lista, Tlista listaNum);
void insertar(Tlista &lista);

int main()
{
	menu();
	system("pause");
	return(0);
}

void menu() {
	int opc;
	cout << "\t\t\t\tษออออออออออออออออออออออออออป" << endl;
	cout << "\t\t\t\tบ   ORDENAMIENTO RADIX     บ" << endl;
	cout << "\t\t\t\tฬออออออออออออออออออออออออออน" << endl;
	cout << "\t\t\t\tบ                          บ" << endl;
	cout << "\t\t\t\tบ    1.Insertar Datos      บ" << endl;
	cout << "\t\t\t\tบ    2.Ordenar             บ" << endl;
	cout << "\t\t\t\tบ    3.Mostrar             บ" << endl;
	cout << "\t\t\t\tบ    4.Salir               บ" << endl;
	cout << "\t\t\t\tบ                          บ" << endl;
	cout << "\t\t\t\tศออออออออออออออออออออออออออผ" << endl;
	cout << "\t\t\t\tIngrese una opcion: ";
	cin >> opc;
	switch (opc) {
	case 1:
		insertarDatos(lista); break;
	case 2:
		Radix(lista); break;
	case 3:
		mostrar(lista); break;
	case 4:
		system("EXIT");
		break;
	default:
		cout << "OPCION INVALIDA!!!" << endl;
		system("PAUSE");
		menu();
		break;
	}
}

void insertarDatos(Tlista &lista) {  // LLENAR DATOS DE LISTA ORIGINAL
	int num;
	Tlista p = lista;
	Tlista nuevo = new(struct Nodo);
	cout << "Ingrese el dato: ";
	cin >> num;
	nuevo->dato = num;
	nuevo->sgte = NULL;
	if (lista == NULL) {
		lista = nuevo;
		nuevo->sgte = NULL;
	}
	else {
		while (p->sgte != NULL)
			p = p->sgte;
		p->sgte = nuevo;
	}
	cout << "DATO REGISTRADO!!!" << endl;
	system("PAUSE");
	system("cls");
	menu();
}

void mostrar(Tlista lista) {
	Tlista p = lista;
	if (p == NULL) {
		cout << "LISTA VACIA !!!" << endl;
	}
	else {
		while (p->sgte != NULL) {
			cout << " " << p->dato << " -> ";
			p = p->sgte;
		}
		cout << p->dato << " -> NULL" << endl;
	}
	system("PAUSE");
	system("cls");
	menu();
}

void insertarLista0(Tlista &lista0, int num) {
	Tlista p = lista0;
	Tlista nuevo = new(struct Nodo);
	nuevo->dato = num;
	nuevo->sgte = NULL;
	if (lista0 == NULL) {
		lista0 = nuevo;
		nuevo->sgte = NULL;
	}
	else {
		while (p->sgte != NULL)
			p = p->sgte;
		p->sgte = nuevo;
	}
}

void insertarLista1(Tlista &lista1, int num) {
	Tlista p = lista1;
	Tlista nuevo = new(struct Nodo);
	nuevo->dato = num;
	nuevo->sgte = NULL;
	if (lista1 == NULL) {
		lista1 = nuevo;
		nuevo->sgte = NULL;
	}
	else {
		while (p->sgte != NULL)
			p = p->sgte;
		p->sgte = nuevo;
	}
}

void insertarLista2(Tlista &lista2, int num) {
	Tlista p = lista2;
	Tlista nuevo = new(struct Nodo);
	nuevo->dato = num;
	nuevo->sgte = NULL;
	if (lista2 == NULL) {
		lista2 = nuevo;
		nuevo->sgte = NULL;
	}
	else {
		while (p->sgte != NULL)
			p = p->sgte;
		p->sgte = nuevo;
	}
}

void insertarLista3(Tlista &lista3, int num) {
	Tlista p = lista3;
	Tlista nuevo = new(struct Nodo);
	nuevo->dato = num;
	nuevo->sgte = NULL;
	if (lista3 == NULL) {
		lista3 = nuevo;
		nuevo->sgte = NULL;
	}
	else {
		while (p->sgte != NULL)
			p = p->sgte;
		p->sgte = nuevo;
	}
}

void insertarLista4(Tlista &lista4, int num) {
	Tlista p = lista4;
	Tlista nuevo = new(struct Nodo);
	nuevo->dato = num;
	nuevo->sgte = NULL;
	if (lista4 == NULL) {
		lista4 = nuevo;
		nuevo->sgte = NULL;
	}
	else {
		while (p->sgte != NULL)
			p = p->sgte;
		p->sgte = nuevo;
	}
}

void insertarLista5(Tlista &lista5, int num) {
	Tlista p = lista5;
	Tlista nuevo = new(struct Nodo);
	nuevo->dato = num;
	nuevo->sgte = NULL;
	if (lista5 == NULL) {
		lista5 = nuevo;
		nuevo->sgte = NULL;
	}
	else {
		while (p->sgte != NULL)
			p = p->sgte;
		p->sgte = nuevo;
	}
}

void insertarLista6(Tlista &lista6, int num) {
	Tlista p = lista6;
	Tlista nuevo = new(struct Nodo);
	nuevo->dato = num;
	nuevo->sgte = NULL;
	if (lista6 == NULL) {
		lista6 = nuevo;
		nuevo->sgte = NULL;
	}
	else {
		while (p->sgte != NULL)
			p = p->sgte;
		p->sgte = nuevo;
	}
}

void insertarLista7(Tlista &lista7, int num) {
	Tlista p = lista7;
	Tlista nuevo = new(struct Nodo);
	nuevo->dato = num;
	nuevo->sgte = NULL;
	if (lista7 == NULL) {
		lista7 = nuevo;
		nuevo->sgte = NULL;
	}
	else {
		while (p->sgte != NULL)
			p = p->sgte;
		p->sgte = nuevo;
	}
}

void insertarLista8(Tlista &lista8, int num) {
	Tlista p = lista8;
	Tlista nuevo = new(struct Nodo);
	nuevo->dato = num;
	nuevo->sgte = NULL;
	if (lista8 == NULL) {
		lista8 = nuevo;
		nuevo->sgte = NULL;
	}
	else {
		while (p->sgte != NULL)
			p = p->sgte;
		p->sgte = nuevo;
	}
}

void insertarLista9(Tlista &lista9, int num) {
	Tlista p = lista9;
	Tlista nuevo = new(struct Nodo);
	nuevo->dato = num;
	nuevo->sgte = NULL;
	if (lista9 == NULL) {
		lista9 = nuevo;
		nuevo->sgte = NULL;
	}
	else {
		while (p->sgte != NULL)
			p = p->sgte;
		p->sgte = nuevo;
	}
}

int pot(int base, int exp) {
	int resp = 1, i;
	if (exp == 0)
		return 1;
	else {
		for (i = 1; i <= exp; i++)
			resp = 10 * resp;
		return resp;
	}

}

void Radix(Tlista &lista) {
	Tlista p = lista;
	bool seguir = false;
	int r, n = 1;
	while (p != NULL || seguir == true) {
		seguir = false;
		p = lista;
		while (p != NULL) {
			r = (p->dato%pot(10, n)) / pot(10, n - 1);
			if (r != 0)
				seguir = true;
			switch (r) {
			case 0: insertarLista0(lista0, p->dato); break;
			case 1: insertarLista1(lista1, p->dato); break;
			case 2: insertarLista2(lista2, p->dato); break;
			case 3: insertarLista3(lista3, p->dato); break;
			case 4: insertarLista4(lista4, p->dato); break;
			case 5: insertarLista5(lista5, p->dato); break;
			case 6: insertarLista6(lista6, p->dato); break;
			case 7: insertarLista7(lista7, p->dato); break;
			case 8: insertarLista8(lista8, p->dato); break;
			case 9: insertarLista9(lista9, p->dato); break;
			}
			p = p->sgte;
		}
		insertar(lista);
		n = n + 1;
	}
	cout << "ELEMENTOS ORDENADOS !!!" << endl;
	system("PAUSE");
	system("cls");
	menu();
}

void llenar(Tlista &lista, Tlista listaNum) {
	Tlista aux = listaNum;
	while (aux != NULL) {
		Tlista p = lista;
		Tlista nuevo = new(struct Nodo);
		nuevo->dato = aux->dato;
		nuevo->sgte = NULL;
		if (lista == NULL) {
			lista = nuevo;
			nuevo->sgte = NULL;
		}
		else {
			while (p->sgte != NULL)
				p = p->sgte;
			p->sgte = nuevo;
		}
		aux = aux->sgte;
	}
}

void insertar(Tlista &lista) {
	lista = NULL;
	if (lista0 != NULL) {
		llenar(lista, lista0);
		lista0 = NULL;
	}
	if (lista1 != NULL) {
		llenar(lista, lista1);
		lista1 = NULL;
	}
	if (lista2 != NULL) {
		llenar(lista, lista2);
		lista2 = NULL;
	}
	if (lista3 != NULL) {
		llenar(lista, lista3);
		lista3 = NULL;
	}
	if (lista4 != NULL) {
		llenar(lista, lista4);
		lista4 = NULL;
	}
	if (lista5 != NULL) {
		llenar(lista, lista5);
		lista5 = NULL;
	}
	if (lista6 != NULL) {
		llenar(lista, lista6);
		lista6 = NULL;
	}
	if (lista7 != NULL) {
		llenar(lista, lista7);
		lista7 = NULL;
	}
	if (lista8 != NULL) {
		llenar(lista, lista8);
		lista8 = NULL;
	}
	if (lista9 != NULL) {
		llenar(lista, lista9);
		lista9 = NULL;
	}
}
