//Given an unsorted array of N elements and an element X. The task is to write a recursive function to check whether the element X is present in the given array or not.

/* Example:
array[] = {1, 2, 3, 4, 5}
X = 3. 

The function should return True, as 3 is 
present in the array. */

The recursive function will somewhat look like as shown below:
// arr[] is the given array 
// l is the lower bound in the array
// r is the upper bound
// x is the element to be searched for
// l and r defines that search will be 
// performed between indices l to r

bool recursiveSearch(int arr[], int l,  
                            int r, int x) 
{ 
    if (r < l) 
        return false; 
    if (arr[l] == x) 
        return true; 
    if (arr[r] == x) 
        return true; 

    return recursiveSearch(arr, l + 1,  
                              r - 1, x); 
} 

//Time Complexity: The above algorithm runs in O(N) time where, N is the number of elements present in the array.
//Space Complexity: There is no extra space used however the internal stack takes O(N) extra space for recursive calls.
