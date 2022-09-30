// Mate.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Math.h"
#include "Trig.h"

using namespace std;

int main()
{
	char resp;
	bool rep;
	int opc, fila_A, columna_A, fila_B, columna_B;
	float x = 0;
	do {
		cout << "¿Que desea realizar?\n 1.Multiplicar matrices \n 2.Sumar matrices \n 3.Trig/Angulo \n 0. Salir \nSeleccione opcion:";
		cin >> opc;
		if (opc == 1) {
			cout << "\n\nIngrese numero de filas de la matriz A:";
			cin >> fila_A;
			cout << "Ingrese numero  de columnas de la matriz A: ";
			cin >> columna_A;
			cout << "Ingrese numero de filas de la matriz B:";
			cin >> fila_B;
			cout << "Ingrese numero  de columnas de la matriz B: ";
			cin >> columna_B;
			Math* m;
			m = new Math(fila_A, columna_A, fila_B, columna_B);
			m->MultMatrices(fila_A, columna_A, fila_B, columna_B);
			delete m;
			rep = true;
			system("pause");
			system("cls");
		}
		if (opc == 2) {
			cout << "\n\nIngrese numero de filas de la matriz A:";
			cin >> fila_A;
			cout << "Ingrese numero  de columnas de la matriz A: ";
			cin >> columna_A;
			fila_B = 0;
			columna_B = 0;
			Math* s;
			s = new Math(fila_A, columna_A, fila_B, columna_B);
			s->SumaMatrices(fila_A, columna_A);
			delete s;
			rep = true;
			system("pause");
			system("cls");
		}
		if (opc == 3) {
			cout << "\n\nIngrese un angulo en grados:";
			cin >> x;
			Trig* a;
			a = new Trig(x);
			a->Ang(x);
			delete a;
			rep = true;
			system("pause");
			system("cls");

		}
		if (opc == 0) {
			rep = false;
		}
		if (opc > 3) {
			cout << "\nEntrada invalida, vuelva a ingresar opcion";
			system("pause");
			system("cls");
			rep = true;
		}
	} while (rep = true);


	
   
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
