#ifndef H_RGI // should not be defined any place else 
#define H_RGI // same const value as for ifndef directive

// Add needed header files here ..
#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdlib>

// You need to implement these two functions ...
// void genRndNums(vector<int> &v);
// void printVec(const vector<int> &v);

using namespace std;

void genRndNums(vector<int> &v)
{
	int SEED = 1;
	int HIGH = 10000;
	int LOW = 1;
	srand(SEED);
	for(auto i = v.begin(); i != v.end(); ++i)
		(*i) = (rand() % HIGH) + LOW;
}

void printVec(const vector<int> &v)
{
	int NO_ITEMS = 12;
	int ITEM_W = 5;
	for(size_t i = 0; i < v.size(); ++i)
	{
		if(i % NO_ITEMS == 0)
			cout << endl;

		cout << setw(ITEM_W) << v.at(i);
	}
}



#endif
