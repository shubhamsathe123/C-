#include<iostream>
using namespace std;
int main()
{
	int no,i,first=0,second=1,third;
	cout<<"How many numbers?";
	cin>>no;
	cout<<"Fibonacci series\n"<<first<<" "<<second;
 
	for(i=2;i<no;i++)
	{
		third=first+second;
		cout<<" "<<third;
		first=second;
		second=third;
	}
}
