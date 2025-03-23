#include "Matrix.h"

double** Matrix::createData(int rows, int cols)
{
	double** res = new double* [rows] { 0 };
	for (int i = 0; i < rows; ++i)
	{
		res[i] = new double[cols] { 0 };
	}
	return res;
}

void Matrix::freeData(double** data, int rows)
{
	for (int i = 0; i < rows; ++i)
	{
		delete[] data[i];
	}
	delete data;
}