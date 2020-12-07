/*Swap two numbers using reference variable. Create class Swap.*/

#include<iostream>
using namespace std;

class Swap
{	int temp,a,b;
	public:
	void swap(int &a,int &b)
	{
		temp=a;
		a=b;
		b=temp;
	}
};
int main()
{
	int n1,n2;
	cout<<"Enter two No's:"<<endl;
	cin>>n1>>n2;
	cout<<"No. before Swapping is:"<<endl;
	cout<<n1<<"\t"<<n2<<endl;
	Swap s;
	s.swap(n1,n2);
	cout<<"No. After Swapping is:"<<endl;
	cout<<n1<<"\t"<<n2<<endl;
}
