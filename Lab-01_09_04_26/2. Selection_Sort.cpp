// Selection Sort Code & Pseudo Code

// Time Complexity:
// Best Case: O(n^2) - even if the array is already sorted, we still need to compare each element with the rest of the array
// Worst Case: O(n^2) - when the array is sorted in reverse order
// Average Case: O(n^2) - for random order of elements

#include<iostream> // for input and output
#include<algorithm> // for swap function
using namespace std;

int main()
{
    int n, pos = 1; cin >> n;
    int a[n+1];

    for (int i = 1; i <= n; ++i) cin >> a[i];

    for (int rep = 1; rep <= (n-1); ++rep)
    {
        int mn = a[rep];
        pos = rep;
        for (int i = rep; i <= n; ++i)
        {
            if (mn > a[i])
            {
                mn = a[i];
                pos = i;
            }
        }
        swap(a[rep], a[pos]);
    }

    for (int i = 1; i <= n; ++i) cout << a[i] << " ";

    cout << "\n";
    
    return 0;
}

// Pseudo Code
/*
1. Read the number of elements in the array (n).
2. Declare an array of size n+1 (to use 1-based indexing).
3. Read n elements into the array starting from index 1.
4. For rep from 1 to n-1:
   a. Initialize mn to a[rep] and pos to rep.
   b. For i from rep to n:
      i. If a[i] is less than or equal to mn, update mn to a[i] and pos to i.
   c. Swap a[rep] with a[pos].
5. Print the sorted array starting from index 1.
*/
