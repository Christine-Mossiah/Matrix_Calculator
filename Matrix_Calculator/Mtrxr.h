#ifndef MTRX_H
#define MTRX_H
#include <iostream>


double** create_matrix(int rows, int columns);

void freeMatrix(double** mtrx, int rows);

void printMatrix(double** mtrx, int rows, int columns);

#endif
