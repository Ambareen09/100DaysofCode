/*Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.

Example 1:

Input:
N = 6
Output: 1
Explanation: The only number with 
3 divisor is 4.*/

bool isPrime(int n){
if(n<=1)
return false;
else if(n<=3)
return true;
else if(n%2==0 || n%3==0)
return false;
else{
for(int i=5;i*i<=n;i+=6){
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


//Expected Time Complexity : O(N1/2 * N1/4)
