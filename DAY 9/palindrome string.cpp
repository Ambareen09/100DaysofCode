Given a string, the task is to write a recursive function to check if the given string is palindrome or not.

Examples:
Input : string = "malayalam"
Output : Yes
Reverse of malayalam is also
malayalam.

Input : string = "max"
Output : No
Reverse of max is not max.


Solution: The idea to write the recursive function is simple and similar to the above problem:
If there is only one character in string, return true.
Else compare first and last characters and recur for remaining substring.

Recursive Function:
// s and e defines the start and end index of string

bool isPalindrome(char str[], int s, int e) 
{ 
    // If there is only one character 
    if (s == e) 
        return true; 
  
    // If first and last 
    // characters do not match 
    if (str[s] != str[e]) 
        return false; 
  
    // If there are more than  
    // two characters, check if  
    // middle substring is also  
    // palindrome or not
    if (s < e) 
        return isPalindrome(str, s + 1, e - 1); 
  
    return true; 
} 
