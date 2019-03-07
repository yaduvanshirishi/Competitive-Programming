/**
 *Whole IDEA
 There are two methods 
1- Rotate By Temp Array 
Example :  Array [ ] = {1,2,3,4,5} rotate by d = 3 elements so temp[ ] = {1,2,3}  so we have to move d(=3) places and make space at end for temp[ ] array elements so in this way 
Time Complexity : O(number of Array elements) but Space complexity = O(d)

2- Rotate One by One: In this way, we have no need for Auxiliary space for temp array (above one is this method) 
 */

#include <iostream>
using namespace std;
int arr_n;
int rotateArrayByOne(int arr[])
{
	int temp = arr[0];
	for (int i = 0; i < arr_n - 1; i++)
		arr[i] = arr[i + 1];
	arr[arr_n - 1] = temp;
	return 0;
}
int rotateArray(int arr[], int d)
{
	for (int i = 0; i < d; i++)
		rotateArrayByOne(arr);
	return 0;
}

int main()
{
	int arr[50], d;
	cout << "Number of values in array:";
	cin >> arr_n;
	cout << "\nEnter " << arr_n << " values :";
	for (int i = 0; i < arr_n; i++)
		cin >> arr[i];

	cout << "\nNumber elements wants rotate:";
	cin >> d;

	rotateArray(arr, d);
	cout << "\nArray after Rotation is :";
	for (int i = 0; i < arr_n; i++)
		cout << arr[i] << " ";
	return 0;
}
