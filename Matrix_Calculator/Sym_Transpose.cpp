//
//  Sym_Transpose.cpp
//  Matrix_Calculator
//
//  Created by Christine Mossiah on 9/26/16.
//  Copyright © 2016 Christine Mossiah. All rights reserved.
//

#include <stdio.h>
#include "Sym_Transpose.h"

int r1 = 2; int c1 = 2;
bool result = true;
bool symmetry(double** sym)
{
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            if (sym[i][j] != sym[j][i])
				result = false;
    return result;
}

double** transpose_2X2(double A[2][2])
{
    int i, j, r, c;
    r = 2; c = 2;
    double** trans = create_matrix(r, c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            trans[i][j] = A[j][i];
    
    return trans;
    
}

double** transpose_3X3(double A[3][3])
{
    int i, j, r, c;
    r = 3; c = 3;
    double** trans = create_matrix(r, c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            trans[i][j] = A[j][i];
    
    return trans;
    
}
double** transpose_4X4(double A[4][4])
{
    int i, j, r, c;
    r = 4; c = 4;
    double** trans = create_matrix(r, c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            trans[i][j] = A[j][i];
    
    return trans;
}

double** transpose_5X5(double A[5][5])
{
    int i, j, r, c;
    r = 5; c = 5;
    double** trans = create_matrix(r, c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            trans[i][j] = A[j][i];
    
    return trans;
    
}
