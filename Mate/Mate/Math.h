#pragma once
class Math
{
private:
	int fila_A;
	int columna_A;
	int fila_B;
	int columna_B;
	
public:
	Math(int, int, int, int);
	void MultMatrices(int fila_A, int columna_A, int fila_B, int columna_B);
	void SumaMatrices(int fila_A, int columna_A);
	
};

