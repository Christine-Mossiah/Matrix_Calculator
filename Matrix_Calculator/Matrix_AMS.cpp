//
//  Matrix_Add.cpp
//  Matrix_Calculator
//
//  Created by Christine Mossiah on 9/26/16.
//  Copyright © 2016 Christine Mossiah. All rights reserved.
//

#include <stdio.h>
#include "Matrix_AMS.h"

void Matrix_Add()
{
    
    double a[10][10], b[10][10], add[10][10];
    int r1, c1, r2, c2, i, j;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    
    /* If column and rows of first matrix in not equal to the column and row of second matrix, asking user to enter the size of matrix again. */
    while (r1 != r2 || c1 != c2)
    {
        cout << "Error!  Matrices cannot be added.\n\n";
        cout << "Enter rows and columns for first matrix: \n";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: \n";
        cin >> r2 >> c2;
    }
    
    /* Storing elements of first matrix. */
    cout << endl << "Enter elements of matrix 1:" << endl;
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    
    /* Storing elements of second matrix. */
    cout << endl << "Enter elements of matrix 2:" << endl;
    for (i = 0; i<r2; ++i)
        for (j = 0; j<c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    
    /* Initializing elements of matrix mult to 0.*/
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c2; ++j)
        {
            add[i][j] = 0;
        }
    
    /* Adding matrix a and b and storing in array add. */
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c2; ++j)
        {
            add[i][j] = a[i][j] + b[i][j];
        }
    
    /* Displaying the multiplication of two matrix. */
    cout << endl << "Output Matrix: " << endl;
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c2; ++j)
        {
            cout << " " << add[i][j];
            if (j == c2 - 1)
                cout << endl;
        }
    cout << endl;
}


void Matrix_Mult()
{
    
    double a[10][10], b[10][10], mult[10][10];
    int r1, c1, r2, c2, i, j, k;
    cout << "Enter rows and columns for first matrix: \n";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: \n";
    cin >> r2 >> c2;
    
    /* If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again. */
    while (c1 != r2)
    {
        cout << "Error! column of first matrix not equal to row of second.\n\n";
        cout << "Enter rows and columns for first matrix: \n";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: \n";
        cin >> r2 >> c2;
    }
    
    /* Storing elements of first matrix. */
    cout << endl << "Enter elements of matrix 1:" << endl;
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    
    /* Storing elements of second matrix. */
    cout << endl << "Enter elements of matrix 2:" << endl;
    for (i = 0; i<r2; ++i)
        for (j = 0; j<c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    
    /* Initializing elements of matrix mult to 0.*/
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c2; ++j)
        {
            mult[i][j] = 0;
        }
    
    /* Multiplying matrix a and b and storing in array mult. */
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c2; ++j)
            for (k = 0; k<c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    
    /* Displaying the multiplication of two matrix. */
    cout << endl << "Output Matrix: " << endl;
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c2; ++j)
        {
            cout << " " << mult[i][j];
            if (j == c2 - 1)
                cout << endl;
        }
    cout << endl;
}


void Matrix_Sub()
{
    
    double a[10][10], b[10][10], sub[10][10];
    int r1, c1, r2, c2, i, j;
    cout << "Enter rows and columns for first matrix: \n";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: \n";
    cin >> r2 >> c2;
    
    /* If column and rows of first matrix in not equal to the column and row of second matrix, asking user to enter the size of matrix again. */
    while (r1 != r2 || c1 != c2)
    {
        cout << "Error! Matrices cannot be subtracted.\n\n";
        cout << "Enter rows and columns for first matrix: \n";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: \n";
        cin >> r2 >> c2;
    }
    
    /* Storing elements of first matrix. */
    cout << endl << "Enter elements of matrix 1:" << endl;
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    
    /* Storing elements of second matrix. */
    cout << endl << "Enter elements of matrix 2:" << endl;
    for (i = 0; i<r2; ++i)
        for (j = 0; j<c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    
    /* Initializing elements of matrix mult to 0.*/
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c2; ++j)
        {
            sub[i][j] = 0;
        }
    
    /* Adding matrix a and b and storing in array add. */
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c2; ++j)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    
    /* Displaying the multiplication of two matrix. */
    cout << endl << "Output Matrix: " << endl;
    for (i = 0; i<r1; ++i)
        for (j = 0; j<c2; ++j)
        {
            cout << " " << sub[i][j];
            if (j == c2 - 1)
                cout << endl;
        }
    cout << endl;
}
