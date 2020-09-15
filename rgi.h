#ifndef H_RGI // should not be defined any place else 
#define H_RGI // same const value as for ifndef directive

// Add needed header files here ..
#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdlib>

/* Weizheng Jiang
   z1861817
   CSCI 340 section 2
   
   
   I certify that this is my own work and where appropriate an extension 
   of the starter code provided for the assignment.
*/

using namespace std;

//The parameter is the reference of vector v

void genRndNums(vector<int> &v)
{
	int SEED = 1;     //Declare the seed to be 1
	int HIGH = 10000; //Declare the range of the number that will be generated
	int LOW = 1;
	srand(SEED);      //Generate the number
	for(auto i = v.begin(); i != v.end(); ++i)
		(*i) = (rand() % HIGH) + LOW;     //Store the number in the vector
}

//The parameter is the reference of vector

void printVec(const vector<int> &v)
{
	int NO_ITEMS = 12;
	int ITEM_W = 5;
	for(size_t i = 0; i < v.size(); ++i) 
	{
		if(i % NO_ITEMS == 0) //print exact 12 numbers per line
			cout << endl;

		cout << setw(ITEM_W) << v.at(i);
	}
}



#endif
