//Given a rope lenght n, you need to find max no. of pieces you can make such that length of every piece is in set {a,b,c} for given 3 values of a,b,c.

#include <iostream>
using namespace std;


int maxCuts(int n, int a, int b, int c)
{
	if(n == 0)
		return 0;
	if(n <= -1)
		return -1;

	int res = max(maxCuts(n-a, a, b, c), 
	          max(maxCuts(n-b, a, b, c), 
	          maxCuts(n-c, a, b, c)));

	if(res == -1)
		return -1;

	return res + 1; 
}
int main() {
	
	int n = 5, a = 2, b = 1, c = 5;
	
	cout<<maxCuts(n, a, b, c);
	
	return 0;
}

//Time complexity: 3^n
