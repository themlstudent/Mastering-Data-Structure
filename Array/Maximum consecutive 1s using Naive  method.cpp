#include <iostream>
using namespace std;


int maxConsecutiveOnes(int arr[], int n)
{
	int res = 0;

	for(int i = 0; i < n; i++)
	{
		int curr = 0;

		for(int j = i; j < n; j++)
		{
			if(arr[j] == 1) curr++;
			else break;
		}

		res = max(res, curr);
	}
	
	return res;
}



int main() {
	
     int arr[] = {0, 1, 1, 1, 0, 1, 1}, n = 7;

     cout<<maxConsecutiveOnes(arr, n);
    
}
