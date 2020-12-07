#include<iostream>
using namespace std;
int main()
{
	int no,digit,temp,sum=0;
	cout<<"Enter no:\n";
	cin>>no;
	temp=no;
	while(temp!=0)
	{
		digit=temp%10;
		sum+=digit;
		temp=temp/10;
	}
	cout<<"Addition of digit:"<<sum<<endl;
}
