// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if a number
// is Palindrome or not
// here i is the starting index
// and j is the last index of the subarray
bool palindrome(vector<int> a, int i, int j)
{
	while(i<j)
	{
		// If the integer at i is not equal to j
		// then the subarray is not palindrome
		if(a[i] != a[j])
			return false;
			
		// Otherwise
		i++;
		j--;
	}
		
	// all a[i] is equal to a[j]
	// then the subarray is palindrome
	return true;
}

// Function to find a subarray whose
// concatenation forms a palindrome
// and return its starting index
int findSubArray(vector<int> arr, int k)
{
	int n= sizeof(arr)/sizeof(arr[0]);
		
	// Iterating over subarray of length k
	// and checking if that subarray is palindrome
	for(int i=0; i<=n-k; i++){
		if(palindrome(arr, i, i+k-1))
			return i;
	}
	
	// If no subarray is palindrome
	return -1;
}

// Driver Code
int main()
{
	vector<int> arr = { 2, 3, 5, 1, 3 };
	int k = 4;

	int ans = findSubArray(arr, k);

	if (ans == -1)

		cout << -1 << "\n";

	else {
		for (int i = ans; i < ans + k;
			i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	return 0;
}

// This code is contributed by Prafulla Shekhar
