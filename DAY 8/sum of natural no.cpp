Sum of Natural nos using recursion:

int getsum(int n)
{
  if(n==0)
  return 0;
  return n+getsum(n-1);
}

T(n)=T(n-1)+ theta(1);
Auxillary space: theta(n);
