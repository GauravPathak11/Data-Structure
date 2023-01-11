#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"enter the number "<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}	
	}
	cout<<sum<<endl;
	return 0;
}
