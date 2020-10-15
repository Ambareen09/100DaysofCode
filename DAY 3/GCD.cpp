/* Problem 2:
Greatest Common Divisior of A number, by Euclidean Algorithm */

int gcd(int a, int b)
{
  if(b==0)
  return a;
  else 
  return (b,a%b);
 }
 
 
 //Time Complexity: O(logn)
 
