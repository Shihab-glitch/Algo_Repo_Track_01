// Bubble Sort Code & Pseudo Code

// Time Complexity:
// Best Case: O(n) - when the array is already sorted
// Worst Case: O(n^2) - when the array is sorted in reverse order
// Average Case: O(n^2) - for random order of elements

#include <iostream> // for input and output
#include <algorithm> // for swap function
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < (n-1); ++i)
    {
        for (int j = 0; j < (n-1-i); ++j)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j+1]);
        }
    }

    for (int i = 0; i <= (n-1); ++i) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}

// Pseudo Code
/*
1. Read the number of elements in the array (n).
2. Declare an array of size n.
3. Read n elements into the array.
4. For i from 0 to n-2:
   a. For j from 0 to n-2-i:
      i. If arr[j] > arr[j+1], swap arr[j] and arr[j+1].
5. Print the sorted array.
*/