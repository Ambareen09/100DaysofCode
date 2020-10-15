//Palindrome check using recursion:


bool isPalindrome(string str, int start, int end)
{
	if(start >= end)
		return true;

	return ((str[start]==str[end]) && 
		     isPalindrome(str, start + 1, end - 1));
}


//T(n)= T(n-2)+theta(1) or O(n)
//Aux space: O(n)
