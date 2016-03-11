#include "stdafx.h"
using namespace std;

void Eratosthenes(bool *a,int n)
{
	a[1]=false; //a[0] not use
	for(int i=2;i<n;i++)
		a[i]=true;
	int p=2;
	int j=p*p;
	int c=0;
	while(j<=n)
	{
		while(j<=n)
		{
			a[j]=false;
			j+=p;
		}
		p++;
		while(!a[p])
			p++;
		j=p*p;
	}
}

void main(int argc, _TCHAR* argv[])
{
	bool a[100]={};
	int n=100;
	Eratosthenes(a,n);
	for(int i=1;i<100;i++)
	{
		if(a[i]==true)
			cout<<i<<endl;
	}
	system("pause");
}






