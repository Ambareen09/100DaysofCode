/*Subset Sum Problem:
Given a set of non-negative integers, and a value sum, determine how many subset of the given set with sum equal to given sum.b*/

int count( int arr[], int n, int sum)
{
  if (n==0)
  return (sum==0)?1:0;
  return count(arr, n-1, sum) + count(arr,n-1,sum-arr[n-1]);
}

//T(n)= 2^n + (2^n-1)
  //  = theta(2^n)
