#include <iostream>
using namespace std;
#define MAX 50

/*
 * *
 * Binary Search
 * */

int binarySearch(int local_arr[], int low, int high, int key)
{
	if (high < low)
		return -1;
	int mid = (low + high) / 2;

	if (local_arr[mid] == key)
		return mid;
	if (local_arr[mid] > key)
		return binarySearch(local_arr, low, mid - 1, key);
	return binarySearch(local_arr, mid + 1, high, key);
}
int findPivot(int local_arr[], int start, int end)
{
	//BAse cases
	if (end < start)
		return -1;
	if (start == end)
		return start;

	int mid = (start + end) / 2; /*Or "low+(high-low)/2"  */

	if (end > mid && local_arr[mid] > local_arr[mid + 1])
		return mid;
	if (mid > start && local_arr[mid - 1] > local_arr[mid])
		return mid - 1;

	if (local_arr[start] == local_arr[mid])
		return findPivot(local_arr, start, mid - 1);
	return findPivot(local_arr, mid + 1, end);
	;
}
int findElement(int local_arr[], int end, int key)
{
	int pivot = findPivot(local_arr, 0, end - 1);
	/*
	 * Not find pivot 
	 * then array is not rotated at all
	 * 
	 * */
	if (pivot == -1)
		return binarySearch(local_arr, 0, end - 1, key);

	/*
	 * If we found then first compare with pivot then search into 
	 * two subarrays around pivot
	 *  
	 * */
	if (local_arr[pivot] == key)
		return pivot;
	if (local_arr[0] <= key)
		return binarySearch(local_arr, 0, pivot - 1, key);
	return binarySearch(local_arr, pivot + 1, end - 1, key);
}
int main()
{
	int n, arr[MAX], d;
	cout << "Enter Number of Elements you want in an array:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "\nEnter Element you want to search:";
	cin >> d;
	int pos = findElement(arr, n, d);

	cout << "Found at :" << pos;
}
