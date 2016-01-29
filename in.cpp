#include<iostream>
using namespace std;
void swap(int& a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
int in(int a[],int n)
{
	int c=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j>0;j--)
		{
			if(a[j]<a[j-1])
			{
			
				swap(a[j],a[j-1]);
				c++;
			}
			else break;
		}
		
	}
	return c;
}
int main()
{
	int a[]={9,8,7,6,5,4,3,2,1};
	for(int i=0;i<9;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int c=in(a,9);
	for(int i=0;i<9;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl<<" inversions ="<<c;
}
