Problem Link: https://practice.geeksforgeeks.org/problems/primality-test/0/?track=DSASP-Mathematics&batchId=154

bool isPrime(int n)
{
    //Your code here
    if (n==1)
    return false;
    if (n==2||n==3)
    return true;
    if(n%2==0||n%3==0)
    return false;
    for(int i=5;i*i<=n;i=i+6)
        if(n%i==0||n%(i+2)==0)
            return false;
    return true;
}
