Problem Link: https://practice.geeksforgeeks.org/problems/lucky-numbers2911/0/?track=DSASP-Recursion&batchId=154

bool isLucky(int n, int &counter) 
{
    int np=n;
    if(counter>n)
    return true;
    if(n%counter==0)
    return false;
    np=np-np/counter;
    counter++;
    return isLucky(np,counter);
    // add codeere
}
