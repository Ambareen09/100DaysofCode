Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.

Input: M = 11, N = 9
Output: 2
Explanation: Binary representation of the given 
numbers are: 1011 and 1001, 
2nd bit from right is different.
Expected Time Complexity: O(max(log m, log n)).
Expected Auxiliary Space: O(1).

Constraints:
1 <= M <= 103
1 <= N <= 103

int getRightMostSetBit(int n)
{
    // to handle edge case when n = 0.  
    if (n == 0)  
        return 0;
     
    return log2(n & -n) + 1;
}
 
int posOfRightMostDiffBit(int m, int n)
{
    return getRightMostSetBit(m ^ n);
}
