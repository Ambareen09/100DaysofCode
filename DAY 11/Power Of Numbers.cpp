Problem Link: https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/0/?track=DSASP-Recursion&batchId=154

long long power(int n,int R)
{
   //Your code here
   const unsigned int M = 1000000007;
   if(R==0)
   return 1;
   if(R%2==0)
   return (power(n,R/2)%M*power(n,R/2)%M )%M;
   return (n*power(n,R/2)%M*power(n,R/2)%M )%M;
   
    
}
