Problem Link: https://practice.geeksforgeeks.org/problems/exactly-3-divisors/0/?track=DSASP-Mathematics&batchId=154

bool isPrime(int n)
{
  if(n<=1)
  return false;
  else if(n<=3)
  return true;
  else if(n%2==0 || n%3==0)
  return false;
  else
  {
    for(int i=5;i*i<=n;i+=6)
    {
      if(n%(i)==0 || n%(i+2)==0)
      return false;
    }
  return true;
  }
}
int exactly3Divisors(int N)
{
int a=3,c=0;
for(int i=4;i<=N;i+=a){
if(isPrime(sqrt(i))==true)
c++;
a+=2;
}
return c;
}
