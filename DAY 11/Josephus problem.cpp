Problem Link: https://practice.geeksforgeeks.org/problems/josephus-problem/1/?track=DSASP-Recursion&batchId=154

int josephus(int n, int k)
{
   //Your code here
   if(n==1)
   return 1;
   return(josephus(n-1,k)+k-1)%n +1;
}
