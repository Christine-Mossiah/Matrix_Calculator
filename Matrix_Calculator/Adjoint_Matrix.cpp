//
//  Adjoint_Matrix.cpp
//  Matrix_Calculator
//
//  Created by Christine Mossiah on 9/26/16.
//  Copyright © 2016 Christine Mossiah. All rights reserved.
//

#include <stdio.h>
#include "Adjoint_Matrix.h"

bool even(int x)
{
    if ((2*x % 2) == 0)
        return true;
    else
        return false;
}

bool odd(int x)
{
    if ((2*x % 2) != 0)
        return true;
    else
        return false;
}

double** Adjoint_3X3(double A[3][3])
{
    int i, j, r, c;
    r = 3; c = 3;
    double COF[3][3], determ_cof[2][2];
    double** adj = create_matrix(r, c);
    double** cofactor = create_matrix(r, c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            
            
            
            
            
            if (even(i + j))
                cofactor[i][j] = A[i][j] * determ_2X2(determ_cof);
            else if (odd(i + j))
                cofactor[i][j] = -(A[i][j] * determ_2X2(determ_cof));
        }
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            COF[i][j] = cofactor[i][j];
            adj[i][j] = transpose_3X3(COF)[i][j];
        }
    return adj;
    
}
