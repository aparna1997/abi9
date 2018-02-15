#include<iostream>
using namespace std;
int main()
{
	int i,count=0;
	cin>>i;
	do
	{
		i=i/10;
		count++;
	}
	while(i!=0);
	cout<<count;
	return 0;
	
}
