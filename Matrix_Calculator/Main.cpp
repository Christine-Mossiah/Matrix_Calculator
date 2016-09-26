#include <iostream>
#include "Inverse_Matrix.h"
#include "Sym_Transpose.h"
//#include "Matrix_Mult.h"
#include "Matrix_AMS.h"
//#include "Matrix_Sub.h"
//#include "Transpose.h"
#include "Adjoint_Matrix.h"

using namespace std;

int main()
{
	int op = 0, op1, mat_num, r1 = 0, c1 = 0, i, j;
	char quit = 'n';
	double a[10][10], determ;
	while (quit == 'n')
	{
		bool result = true;
		cout << "\t\t\tMatrix Calculator:\n\n";
		cout << "\tHow many Matrices?  1 or 2\n\n";
		cin >> mat_num;
		if (mat_num == 1)
		{
			cout << "\n\t1. Find Determinant of a Matrix\n\t2. Find Inverse of a Matrix\n\t3. Is Symmtric?\n\t4. Find Transpose\n\t5. Find Adjoint\n\t6. All of the Above\n\n";
			cin >> op;
			cout << "\nEnter rows and columns for matrix:\n";
			cin >> r1 >> c1;
			if (r1 == c1)
			{
				for (i = 0; i<r1; ++i)
					for (j = 0; j<c1; ++j)
					{
						cout << "Enter element a" << i + 1 << j + 1 << " : ";
						cin >> a[i][j];
					}
			}
			else
				cout << "Operation can not be completed.\n\n";
		}
		else if (mat_num == 2 || mat_num == 3)
		{
			cout << "\n\t1. Add Matrices\n\t2. Subtract Matrices\n\t3. Multiply Matrices\n\n";
			cin >> op1;
			op = 6 + op1;
		}
// DETERMINANT
		switch (op)
		{
			case 1:
				if (r1 == 2)
				{
					double A[2][2];
					for (i = 0; i<r1; ++i)
						for (j = 0; j < c1; ++j)
						{
							A[i][j] = a[i][j];
						}
					determ = determ_2X2(A);
					cout << "\nThe determinant is " << determ << endl << endl;
				}

				if (r1 == 3)
				{
					double A[3][3];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
						{
							A[i][j] = a[i][j];
						}
					determ = determ_3X3(A);
					cout << "\nThe determinant is " << determ << endl << endl;
				}

				if (r1 == 4)
				{
					double A[4][4];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
						{
							A[i][j] = a[i][j];
						}
					determ = determ_4X4(A);
					cout << "\nThe determinant is " << determ << endl << endl;
				}

				if (r1 == 5)
				{
					double A[5][5];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
						{
							A[i][j] = a[i][j];
						}
					determ = determ_5X5(A);
					cout << "\nThe determinant is " << determ << endl << endl;
				}
				break;
// INVERSE
			case 2:
				if (r1 == 2)
				{
					double A[2][2];
					for (i = 0; i<r1; ++i)
						for (j = 0; j < c1; ++j)
						{
							A[i][j] = a[i][j];
						}
					printMatrix(inverse_2X2(A), r1, c1);
					cout << "\n\n";
				}

				if (r1 == 3)
				{
					double A[3][3];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
						{
							A[i][j] = a[i][j];
						}
					printMatrix(inverse_3X3(A), r1, c1);
					cout << "\n\n";
				}

				if (r1 == 4)
				{
					double A[4][4];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
						{
							A[i][j] = a[i][j];
						}
					printMatrix(inverse_4X4(A), r1, c1);
					cout << "\n\n";
				}
				break;
// SYMMETRY
			case 3:

				for (i = 0; i < r1; ++i)
					for (j = 0; j < c1; ++j)
					{
						if (a[i][j] != a[j][i])
							result = false;
					}
				if (result)
					cout << "\nThis matrix is symmetric.\n\n";
				else
					cout << "\nThis matrix is NOT symmetric.\n\n";
				break;
// TRANSPOSE
			case 4:
				if (r1 == 2)
				{
					double A[2][2];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
							A[i][j] = a[i][j];
					cout << "The transpose for this matrix is\n\n";
					printMatrix(transpose_2X2(A), r1, c1);
				}
				
				if (r1 == 3)
				{
					double A[3][3];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
							A[i][j] = a[i][j];
					cout << "The transpose for this matrix is\n\n";
					printMatrix(transpose_3X3(A), r1, c1);
				}

				if (r1 == 4)
				{
					double A[4][4];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
							A[i][j] = a[i][j];
					cout << "The transpose for this matrix is\n\n";
					printMatrix(transpose_4X4(A), r1, c1);
				}

				if (r1 == 5)
				{
					double A[5][5];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
							A[i][j] = a[i][j];
					cout << "The transpose for this matrix is\n\n";
					printMatrix(transpose_5X5(A), r1, c1);
				}
				break;
// ADJOINT
			case 5:
				if (r1 == 3)
				{
					double A[3][3];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
							A[i][j] = a[i][j];
					cout << "The adjoint for this matrix is\n\n";
					printMatrix(Adjoint_3X3(A), r1, c1);
				}
				break;
// ALL OF THE ABOVE
			case 6:
				if (r1 == 2)
				{
					double A[2][2];
					for (i = 0; i<r1; ++i)
						for (j = 0; j < c1; ++j)
						{
							A[i][j] = a[i][j];
							if (a[i][j] != a[j][i])
								result = false;
						}
					determ = determ_2X2(A);
					cout << "\nThe determinant is " << determ << endl << endl;
					cout << "\n\nThe inverse is " << endl << endl;
					printMatrix(inverse_2X2(A), r1, c1);
					cout << "\n\n";
					if (result)
						cout << "\nThis matrix is symmetric.\n\n";
					else 
						cout << "\nThis matrix is NOT symmetric.\n\n";
				}

				if (r1 == 3)
				{
					double A[3][3];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
						{
							A[i][j] = a[i][j];
							if (a[i][j] != a[j][i])
								result = false;
						}
					determ = determ_3X3(A);
					cout << "\n\nThe determinant is " << determ << endl << endl;
					cout << "\n\nThe inverse is " << endl << endl;
					printMatrix(inverse_3X3(A), r1, c1);
					cout << "\n\n";
					if (result)
						cout << "\nThis matrix is symmetric.\n\n";
					else 
						cout << "\nThis matrix is NOT symmetric.\n\n";
				}

				if (r1 == 4)
				{
					double A[4][4];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
						{
							A[i][j] = a[i][j];
							if (a[i][j] != a[j][i])
								result = false;
						}
					determ = determ_4X4(A);
					cout << "\n\nThe determinant is " << determ << endl << endl;
					cout << "\n\nThe inverse is " << endl << endl;
					printMatrix(inverse_4X4(A), r1, c1);
					cout << "\n\n";
					if (result)
						cout << "\nThis matrix is symmetric.\n\n";
					else 
						cout << "\nThis matrix is NOT symmetric.\n\n";
				}

				if (r1 == 5)
				{
					double A[5][5];
					for (i = 0; i < r1; ++i)
						for (j = 0; j < c1; ++j)
						{
							A[i][j] = a[i][j];
							if (a[i][j] != a[j][i])
								result = false;
						}
					determ = determ_5X5(A);
					cout << "\n\nThe determinant is " << determ << endl << endl;
					if (result)
						cout << "\nThis matrix is symmetric.\n\n";
					else 
						cout << "\nThis matrix is NOT symmetric.\n\n";
				}
				break;
// ADD
			case 7:
				Matrix_Add();
				break;
// SUBTRACT
			case 8:
				Matrix_Sub();
				break;
// MULTIPLY
			case 9:
				Matrix_Mult();
				break;

			default:
				cout << "Please select only 1 - 7: \n\n";
		}
		cout << "\nWould you like to quit?  Y or N\n";
		cin >> quit;
		if (quit == 'y')
			return 0;
	}
	
}
