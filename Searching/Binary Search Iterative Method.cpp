#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int x)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==x)
		{
			return mid;
		}
		
		else if(arr[mid]>x)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
		
	}
}
int main()
{
	int arr[]={10,20,30,40,50,60};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=50;
	cout<<"Element Found at Index :>"<<binarySearch(arr,n,x);
	return 0;
}
