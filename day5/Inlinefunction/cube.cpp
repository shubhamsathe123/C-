#include<iostream>
using namespace std;
inline int cube(int x)
{
	return x*x*x;
}
int main()
{
	int n;
	cout<<"Enter no to find the cube:"<<endl;
	cin>>n;
	cout<<"cube of"<<n<<" is:"<<cube(n)<<endl;
}
