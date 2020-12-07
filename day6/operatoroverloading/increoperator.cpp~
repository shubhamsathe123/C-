#include<iostream>
using namespace std;

class operatorOverloading
{
	int a,b,ans;
	public:
	operatorOverloading(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
void operator +()
{
	ans = ++a;
}
void show()
{
	cout<<"operator overloading is:"<<ans<<endl;
}
};

int main()
{
operatorOverloading o(3,2);
cout<<"result without overloading"<<(3+2)<<endl;
+o;
o.show();
}
