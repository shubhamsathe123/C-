#include<iostream>
using namespace std;

class MOperations
{
	int a,b,ans;
	public:
		MOperations (int a, int b)
		{
			this->a=a;
			this->b=b;
		}
	void operator +()
	{
		ans = a*b;
	}
	void show()
	{
		cout<<"Result of operator overloading"<<ans<<endl;
	}	
};
int main()
{
	MOperations m (3,4);
	+m;
	m.show();
}
