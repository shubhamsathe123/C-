#include<iostream>
using namespace std;
inline int maxNo(int x,int y)
{
	return (x>y)?x:y;
}
int main()
{
	int a,b;
	cout<<"Enter two no's:"<<endl;
	cin>>a>>b;
	cout<<"Max no of"<<a<<" and"<<b<<" is:<<maxNo(a,b)<<endl;
}
