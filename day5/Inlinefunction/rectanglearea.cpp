#include<iostream>
using namespace std;
inline float rectangleArea(float h,float w)
{
	return h*w;
}
int main()
{
	float h,w;
	cout<<"Enter height and width of rectangle:"<<endl;
	cin>>h>>w;
	cout<<"area of rectangle:"<<rectangleArea(h,w)<<endl;
}
