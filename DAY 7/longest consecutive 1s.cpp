Today I solved more problems using Bitwise Operations.
I also started Recusrsive functions.
Given a number N. The task is to find the length of the longest consecutive 1s in its binary representation.

Example 1:

Input: N = 14
Output: 3
Explanation: Binary representation of 14 is 
1110, in which 111 is the longest consecutive 
set bits of length is 3.

int maxConsecutiveOnes(int n)
{
 
    // Your code here
    int c=0;
    while(n!=0)
    {
        n=(n&(n<<1));
        c++;
    }
    return c;
    
}



