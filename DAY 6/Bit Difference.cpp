/*You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

Example 1:

Input: A = 10, B = 20
Output: 4
Explanation:
A  = 01010
B  = 10100
As we can see, the bits of A that need 
to be flipped are 01010. If we flip 
these bits, we get 10100, which is B. */


int countSetBits(int n) 
{ 
    int count = 0; 
    while (n > 0) 
    { 
        count++; 
        n &= (n-1); 
    } 
    return count; 
} 
  
// Function that return count of 
// flipped number 
int FlippedCount(int a, int b) 
{ 
    // Return count of set bits in 
    // a XOR b 
    return countSetBits(a^b); 
} 
