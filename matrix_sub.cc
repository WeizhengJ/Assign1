#include "matrix.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#ifdef H_PROG2
#define H_PROG2

#define FILE1 "./matrix01.dat"
#define FILE2 "./matrix02.dat"

#define ITEM_W 8

/* Weizheng Jiang
 * z1861817
 * CSCI 340 Assignment 2
 *
 * I certify that this is my own work and where appropriate an extension
 * of the starter code provided for the assignment.
 */


//to open two data files
void open_files(ifstream& is1, ifstream& is2)
{
	is1.open(FILE1);
	is2.open(FILE2);

//if the files cannot open, print the error message

	if(!is1)
	{
		cerr << "Cannot open file" << FILE1 << endl;
		exit(1);
	}

	if(!is2)
	{
		cerr << "Cannot open file" << FILE2 << endl;
		exit(1);
	}

}

//to read contents of two data files
void read_data(ifstream& is, vector <vector<int> >& m)
{
	//store the data in the vector
	for(size_t i = 0; i < m.size(); ++i)
	{
		for(size_t j = 0; j < m[i].size(); ++j)
		{
			is >> m[i][j];
		}
	}
}

//to print contents of all matrices
void print_data(const vector <vector<int> >& m)
{
	auto rows = m.size();
	auto cols = m[0].size();

	cout << rows << " x " << cols << endl;
//the number of printed number should be the same as cols
	for(size_t i = 0; i < m.size(); ++i)
	{
		for(size_t j = 0; j < m[i].size(); ++j)
		{
			cout << setw(ITEM_W) << m[i][j];
		}
		
		cout << endl;
	}
}


//to generate a matrix by multiplying two input matrices
void gen_data(const vector < vector<int> >& A, const vector < vector<int> >& B, vector < vector<int> >& C)
{
	//it multiply the matrix in A and B and store the result in vector C
	for(size_t i = 0; i < A.size(); ++i)
	{
		for(size_t j = 0; j < B[0].size(); ++j)
		{
			//initialize the C vector
			C[i][j] = 0;
			for(size_t k = 0; k < A[0].size(); ++k)
			{
				C[i][j] = A[i][k] * B[k][j];
			}
		}
	}
}


#endif





















