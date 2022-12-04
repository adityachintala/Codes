// 10. WAP to search a key element in a list of numbers using Binary Search technique.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
        if (arr[mid] == x)
			return mid;
        if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

int main()
{
    cout << "Enter array size : "; int n; cin >> n;
    int arr[n];
    cout << "Enter elements : ";

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search : "; int x; cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << (result+1);
	return 0;
}

/*

Output :

Enter array size : 5
Enter elements : 2 3 4 10 40
Enter element to search : 10
Element is present at index 4

*/