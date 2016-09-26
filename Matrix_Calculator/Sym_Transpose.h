#ifndef SYM_TRANSPOSE_H
#define SYM_TRANSPOSE_H

#include "Mtrxr.h"


bool symmetry(double** sym);

double** transpose_2X2(double A[2][2]);

double** transpose_3X3(double A[3][3]);

double** transpose_4X4(double A[4][4]);

double** transpose_5X5(double A[5][5]);


#endif
