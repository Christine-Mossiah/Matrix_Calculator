//
//  Determ_Matrix.cpp
//  Matrix_Calculator
//
//  Created by Christine Mossiah on 9/26/16.
//  Copyright © 2016 Christine Mossiah. All rights reserved.
//

#include <stdio.h>
#include "Determ_Matrix.h"

double determ_2X2(double B[2][2])
{
    double determ = 0;
    determ = (B[0][0] * B[1][1]) - (B[0][1] * B[1][0]);
    return determ;
    
}

double determ_3X3(double A[3][3])
{
    int i, j;
    double determ = 0;
    double B1[2][2], B2[2][2], B3[2][2];
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            B1[i][j] = A[i + 1][j + 1];
            B3[i][j] = A[i][j + 1];
            if (i == 0)
                B2[i][j] = A[i][j + 1];
            else if (i == 1)
                B2[i][j] = A[i + 1][j + 1];
        }
    }
    determ = ((A[0][0] * determ_2X2(B1)) - (A[1][0] * determ_2X2(B2)) + (A[2][0] * determ_2X2(B3)));
    
    return determ;
    
}

double determ_4X4(double B[4][4])
{
    int i, j;
    double determ = 0;
    double B1[3][3], B2[3][3], B3[3][3], B4[3][3];
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            B1[i][j] = B[i + 1][j + 1];
            B4[i][j] = B[i][j + 1];
            if (i == 0)
            {
                B2[i][j] = B[i][j + 1];
                B3[i][j] = B[i][j + 1];
            }
            if (i == 1)
            {
                B2[i][j] = B[i + 1][j + 1];
                B3[i][j] = B[i][j + 1];
            }
            else if (i == 2)
            {
                B2[i][j] = B[i + 1][j + 1];
                B3[i][j] = B[i + 1][j + 1];
            }
            determ = ((B[0][0] * determ_3X3(B1)) - (B[1][0] * determ_3X3(B2)) + (B[2][0] * determ_3X3(B3)) - (B[3][0] * determ_3X3(B4)));
        }
    }
    return determ;
}


double determ_5X5(double B[5][5])
{
    int i, j;
    double determ = 0;
    double B1[4][4], B2[4][4], B3[4][4], B4[4][4], B5[4][4];
    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 4; ++j)
        {
            B1[i][j] = B[i + 1][j + 1];
            B5[i][j] = B[i][j + 1];
            if (i == 0)
            {
                B2[i][j] = B[i][j + 1];
                B3[i][j] = B[i][j + 1];
                B4[i][j] = B[i][j + 1];
            }
            if (i == 1)
            {
                B2[i][j] = B[i + 1][j + 1];
                B3[i][j] = B[i][j + 1];
                B4[i][j] = B[i][j + 1];
            }
            if (i == 2)
            {
                B2[i][j] = B[i + 1][j + 1];
                B3[i][j] = B[i + 1][j + 1];
                B4[i][j] = B[i][j + 1];
            }
            else if (i == 3)
            {
                B2[i][j] = B[i + 1][j + 1];
                B3[i][j] = B[i + 1][j + 1];
                B4[i][j] = B[i + 1][j + 1];
            }
            determ = ((B[0][0] * determ_4X4(B1)) - (B[1][0] * determ_4X4(B2)) + (B[2][0] * determ_4X4(B3)) - (B[3][0] * determ_4X4(B4)) + (B[4][0] * determ_4X4(B5)));
        }
    }
    return determ;
}
