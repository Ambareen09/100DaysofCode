/*Given N in Gray code equivalent. Find its binary equivalent. 
Note: We need to find the binary equivalent of the given gray code and return the decimal equivalent of the binary representation.
Gray to binary conversion :

The Most Significant Bit (MSB) of the binary code is always equal to the MSB of the given binary number.
Other bits of the output binary code can be obtained by checking gray code bit at that index. If current gray code bit is 0, then copy previous binary code bit, else copy invert of previous binary code bit.

Example 1:

Input: N = 4
Output: 7
Explanation:
4 is represented as gray 100 and its 
binary equivalent is 111 whose decimal 
equivalent is 7. */


int grayToBinary(int n)
{
    
    // Your code here
    int inv = 0; 
  
    // Taking xor until n becomes zero 
    for (; n; n = n >> 1) 
        inv ^= n; 
  
    return inv; 
    
}
