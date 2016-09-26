//
//  Mtrxr.cpp
//  Matrix_Calculator
//
//  Created by Christine Mossiah on 9/26/16.
//  Copyright © 2016 Christine Mossiah. All rights reserved.
//

#include <stdio.h>
#include "Mtrxr.h"


double** create_matrix(int rows, int columns){
    double** mtrx = new double*[rows];
    for (int i = 0; i < rows; i++) {
        mtrx[i] = new double[columns];
        for (int j = 0; j < columns; j++){ mtrx[i][j] = (i + j); }// sample set value;
    }
    return mtrx;
}
void freeMatrix(double** mtrx, int rows){
    if (mtrx){
        for (int i = 0; i < rows; i++){ if (mtrx[i]){ delete[] mtrx[i]; } }
        delete[] mtrx;
    }
}
void printMatrix(double** mtrx, int rows, int columns){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            std::cout << mtrx[i][j] << "\t";
            if (j == rows-1)
                std::cout << std::endl;
        }
    }
}
