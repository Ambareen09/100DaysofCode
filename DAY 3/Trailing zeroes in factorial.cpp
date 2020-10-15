/*Problem 1:

Trailing zeroes in factorial: To find the no. of zeroes at the end of the factorial of a given no.(n),
Eg: n=5
output: 1
Explaination: 5!= 120, which has 1 0 at the end. */


int countTrailingZeros(int n)
{
	int res = 0;

	for(int i=5; i<=n; i=i*5)
	{
		res = res + (n / i);
	}

	return res;
}


//Time Complexity: Theta(logn)
