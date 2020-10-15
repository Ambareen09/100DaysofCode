Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
Note: If there is no set bit in the integer N, then return 0 from the function.  

Input: N = 18
Output: 2
Explanation: Binary representation of 18 is 010010,
the first set bit from the right side is at position
Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 106

unsigned int getFirstSetBit(int n)
{
    
    // Your code here
    return log2(n & -n) + 1; 
    
    
}
