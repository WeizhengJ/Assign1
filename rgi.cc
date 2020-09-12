#include "rgi.h"
#include <vector>
#include <algorithm>

// Add needed constants

// Add code for genRndNums
// Add code for printVec

using namespace std;

int main()
{
	int VEC_SIZE = 200;
	vector<int> v(VEC_SIZE);
	genRndNums(v);

	sort(v.begin(),v.end());
	
	printVec(v);	

    return 1;
}
