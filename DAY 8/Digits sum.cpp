//Sum of digits using recursion:

int sums(int n)
{
if(n<0)
return n;
return sums(n/10)+ n%10;
}
