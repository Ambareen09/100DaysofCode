Given two integers ‘a’ and ‘m’. The task is to find modular multiplicative inverse of ‘a’ under modulo ‘m’.
Note: Print the smallest modular multiplicative inverse.

Example 1:

Input:
a = 3
m = 11
Output: 4
Explanation: Since (4*3) mod 11 = 1, 4 
is modulo inverse of 3. One might think,
15 also as a valid output as "(15*3)
mod 11"  is also 1, but 15 is not in 
ring {0, 1, 2, ... 10}, so not valid.

Time Complexity : O(m)

int modInverse(int a, int m)
{
    //Your code here
     a = a % m;
    for(int i = 1; i< m; i++)
    if((a*i) % m == 1)
    {
        return i; 
    }
    return -1;
}




