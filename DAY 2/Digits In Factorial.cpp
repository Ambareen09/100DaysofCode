Problem link: https://practice.geeksforgeeks.org/problems/digits-in-factorial/0/?track=DSASP-Mathematics&batchId=154


int digitsInFactorial(int n)
{
    if (n < 0) 
        return 0; 
  
    // base case 
    if (n <= 1) 
        return 1; 
  
    // else iterate through n and calculate the 
    // value 
    double digits = 0; 
    for (int i=2; i<=n; i++) 
        digits += log10(i); 
  
    return floor(digits) + 1; 
}
