#include<iostream>
using namespace std;
int arr_n;

void arrayReverse(int local_arr[],int start,int end)
{
	int temp;
	while(start<end)
	{
		temp=local_arr[start];
		local_arr[start]=local_arr[end];
		local_arr[end]=temp;
		++start;
		--end;
	}
	
}
void rotateArrayLeft(int local_arr[],int d)
{
	
		arrayReverse(local_arr,0,d-1);
		/*cout<<"\nLocal Array after 1 Rotation is :";
		for(int i=0;i<arr_n;i++)
			cout<<local_arr[i]<<" ";
		*/
		arrayReverse(local_arr,d,arr_n-1);
		/*cout<<"\nLocal Array after 2 Rotation is :";
		for(int i=0;i<arr_n;i++)
			cout<<local_arr[i]<<" ";*/
			
		arrayReverse(local_arr,0,arr_n-1);
		/*cout<<"\nLocal Array after 3rd Rotation is :";
		for(int i=0;i<arr_n;i++)
			cout<<local_arr[i]<<" ";*/
	
}
int main(){
	int arr[50],d;
	cout<<"Number of values in array:";
	cin>>arr_n;
	cout<<"\nEnter "<<arr_n<<" values :";
	for(int i=0;i<arr_n;i++)
		arr[i]=0;
	for(int i=0;i<arr_n;i++)
		cin>>arr[i];
	
	cout<<"\nNumber elements wants rotate:";
	cin>>d;
	
	rotateArrayLeft(arr,d);
	cout<<"\nArray after Rotation is :";
	for(int i=0;i<arr_n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
