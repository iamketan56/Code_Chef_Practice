#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		double h,c,t;
		cin>>h>>c>>t;
		int grade;
		if(h>50&&c<0.7&&t>5600)
		grade=10;
		else if(h>50&&c<0.7)
		grade=9;
		else if(c<0.7&&t>5600)
		grade=8;
		else if(h>50&&t>5600)
		grade=7;
		else if(h>50||c<0.7||t>5600)
		grade=6;
		else if(!(h>50&&c<0.7&&t>5600))
		grade=5;
		cout<<grade<<endl;
	}
	return 0;
}