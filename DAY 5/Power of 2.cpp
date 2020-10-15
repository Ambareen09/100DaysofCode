Program to check whether a number is a power of 2 or not.
Idea: A power of 2, in it's binary representation has only 1 set bit.

bool isPow2(int n)
{
    if(n == 0)
        return true;
    
    return ((n & (n - 1)) == 0);
}
