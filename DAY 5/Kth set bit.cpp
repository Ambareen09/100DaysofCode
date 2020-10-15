//Find whether Kth bit is set or not.

#include <iostream> 
using namespace std; 

void isKthBitSet(int n, int k) 
{ 
	if ((n >> (k - 1)) & 1) 
		cout << "SET"; 
	else
		cout << "NOT SET"; 
} 
