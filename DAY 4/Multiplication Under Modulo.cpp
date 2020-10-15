You are given two numbers a and b. You need to find the multiplication of a and b under modulo M (M as 109+7).

Example 1:

Input:
a = 92233720368547758
b = 92233720368547758
Output: 484266119
Explanation: Multiplication of a and b 
under modulo M will be 484266119.

int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    //your code here
    return(a%M+b%M)%M;
}

