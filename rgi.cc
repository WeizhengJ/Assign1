#include "rgi.h"
#include <vector>
#include <algorithm>

/* Weizheng Jiang
   z1861817
   CSCI 340 section 2
   
   I certify that this is my own work and where appropriate an extension 
   of the starter code provided for the assignment.
   
*/

using namespace std;

//genRndNums will generate the random numbers and use the push_back method store them in vector v
//Then use the sort method to sort the elements in the range [begin,end)
//Then call the printVec function to print the sorted element

int main()
{
	int VEC_SIZE = 200;
	vector<int> v(VEC_SIZE);
	genRndNums(v);

	sort(v.begin(),v.end());
	
	printVec(v);	

    return 1;
}
