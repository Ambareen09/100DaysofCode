/* Given a number N. The task is to check whether it is sparse or not. 
A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.

Example 1:

Input: N = 2
Output: true
Explanation: Binary Representation of 2 is 10, 
which is not having consecutive set bits. 
So, it is sparse number. */


bool checkSparse(int n) 
{ 
    // n is not sparse if there is set 
    // in AND of n and n/2 
    if (n & (n>>1)) 
        return false; 
  
    return true; 
} 

