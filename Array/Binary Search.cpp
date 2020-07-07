#include<iostream>
using namespace std;

 // Binary search method for sorted element.
 
 int binary_search(int a[],int n ,int key )
 {
 	int s=0;
 	int e=n-1;
 	
 	while(s<=e)
 	{
 		int mid=(s+e)/2;
 		
 		if(a[mid]==key)
 		{
 			return mid;
		 }
		 else if (a[mid]>key)
		 {
		   e=mid-1;	
		 }
		 else
		 {
		 	s=mid+1;
		 }
 		
	 }
 	return -1;
 	
 }
 int main()
{
	int n,key;
	int a[10];
	cout<<"Enter the Number of elements:";
	cin>>n;
	cout<<" Enter the elements ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>> key;
	
	cout<<binary_search(a, n, key)<<endl;
}
