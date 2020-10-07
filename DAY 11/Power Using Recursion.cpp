Problem Link: https://practice.geeksforgeeks.org/problems/power-using-recursion/0/?track=DSASP-Recursion&batchId=154


int RecursivePower(int x,int y)
{
    //Your code here
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return RecursivePower(x, y / 2) * RecursivePower(x, y / 2); 
    else
        return x * RecursivePower(x, y / 2) * RecursivePower(x, y / 2); 
} 
