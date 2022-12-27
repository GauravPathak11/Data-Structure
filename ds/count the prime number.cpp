#include<iostream>
using namespace std;
int main()
{
/*	int i,n,k=0;
	cout<<"enter the number "<<endl;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			k=k+1;
		}
	}
	if(k==1)
	cout<<"prime"<<endl;
	else
	cout<<"not prime"<<endl;*/
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
