#ifndef ADJOINT_MATRIX_H
#define ADJOINT_MATRIX_H
#include "Mtrxr.h"
#include "Sym_Transpose.h"
#include "Determ_Matrix.h"

bool even(int x);


bool odd(int x);


double** Adjoint_3X3(double A[3][3]);

#endif
