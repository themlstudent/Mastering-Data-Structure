#include<iostream>
using namespace std;
void primeFactor(int n)
{
	if(n<=1)
	{
		return;
	}
	while(n%2==0)
	{
		cout<<2<<endl;
		n=n/2;
	}
	while(n%3==0)
	{
		cout<<3<<endl;
		n=n/3;
	}
	for(int i=5;i*i<=n;i=i+6)
	{
		while(n%i==0)
		{
			cout<<i<<endl;
				n=n/i;
		}
		while(n%(i+2)==0)
		{
			cout<<i+2<<endl;
			n=n/(i+2);
		}
	}
	if(n>3)
	{
		cout<<n<<endl;
	}
	
}
int main ()
{
	int n =450;
	primeFactor(n);
	return 0;
}
