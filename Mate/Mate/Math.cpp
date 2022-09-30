#include "Math.h"
#include <iostream>

using namespace std;

Math::Math(int fila_A, int columna_A, int fila_B, int columna_B) {
	this->fila_A = fila_A;
	this->columna_A = columna_A;
	this->fila_B = fila_B;
	this->columna_B = columna_B;
}

void Math::MultMatrices(int fila_A, int columna_A, int fila_B, int columna_B) {
	int a[10][10], b[10][10], mult[10][10],i, j, k;
    cout << endl << "Ingrese los valores de la matriz A:" << endl;
    for (i = 0; i < fila_A; ++i)
        for (j = 0; j < columna_A; ++j)
        {
            cout << "Ingrese el valor A" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    cout << endl << "Ingrese los valores de la matriz B:" << endl;
    for (i = 0; i < fila_B; ++i)
        for (j = 0; j < columna_B; ++j)
        {
            cout << "Ingrese el valor B" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    for (i = 0; i < fila_A; ++i)
        for (j = 0; j < columna_B; ++j)
        {
            mult[i][j] = 0;
        }


    for (i = 0; i < fila_A; ++i)
        for (j = 0; j < columna_B; ++j)
            for (k = 0; k < columna_A; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }


    cout << endl << "Matriz Resultante: " << endl;
    for (i = 0; i < fila_A; ++i)
        for (j = 0; j < columna_B; ++j)
        {
            cout << " " << mult[i][j];
            if (j == columna_B - 1)
                cout << endl;
        }
}

void Math::SumaMatrices(int fila_A, int columna_A) {
    int a[100][100], b[100][100], sum[100][100], i, j;

    for (i = 0; i < fila_A; ++i)
        for (j = 0; j < columna_A; ++j)
        {
            cout << "Ingrese valor A" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    cout << endl << "Enter Valores de la matriz B: " << endl;
    for (i = 0; i < fila_A; ++i)
        for (j = 0; j < columna_A; ++j)
        {
            cout << "Ingrese valor B" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

     
    for (i = 0; i < fila_A; ++i)
        for (j = 0; j < columna_A; ++j)
            sum[i][j] = a[i][j] + b[i][j];


    cout << endl << "La matriz resultante es: " << endl;
    for (i = 0; i < fila_A; ++i)
        for (j = 0; j < columna_A; ++j)
        {
            cout << sum[i][j] << "  ";
            if (j == columna_A - 1)
                cout << endl;
        }

}

