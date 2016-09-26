#include <iostream>
#include "Sym_Transpose.h"
#include "Mtrxr.h"
using namespace std;



int main1()
{
	bool result = true;
	double** B;
	double A[2][2];
	int i, j, q, r1, c1;
	//r1 = 2;
	//c1 = 2;
	cout << "\nEnter rows and columns for matrix:\n";
	cin >> r1 >> c1;
	B = create_matrix(r1, c1);
	if (r1 == c1)
	{
		for (i = 0; i < r1; ++i)
			for (j = 0; j < c1; ++j)
			{
				cout << "Enter element a" << i + 1 << j + 1 << " : ";
				cin >> A[i][j];
			}
	}
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; j++)
			B[i][j] = A[i][j];

	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; j++)
			if (B[i][j] != B[j][i])
				result = false;
	
	if (result)
		cout << "symmetric\n";
	else
		cout << "nope!\n";
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c1; ++j)
		{
			cout << B[i][j] << " \n";
			cout << B[j][i] << " \n";
		}
	cin >> q;
	if (q == 'q')
		return 0;

	
}

