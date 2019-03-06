#include<iostream>
using namespace std;
int arr_n;
int rotateArrayByOne(int arr[]){
	int temp=arr[0];
	for(int i=0;i<arr_n-1;i++)
		arr[i]=arr[i+1];
	arr[arr_n-1]=temp;
	return 0;
}
int rotateArray(int arr[],int d){
	for(int i=0;i<d;i++)
		rotateArrayByOne(arr);
	return 0;
}

int main(){
	int arr[50],d;
	cout<<"Number of values in array:";
	cin>>arr_n;
	cout<<"\nEnter "<<arr_n<<" values :";
	for(int i=0;i<arr_n;i++)
		cin>>arr[i];
	
	cout<<"\nNumber elements wants rotate:";
	cin>>d;
	
	rotateArray(arr,d);
	cout<<"\nArray after Rotation is :";
	for(int i=0;i<arr_n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
