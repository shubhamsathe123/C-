#include<iostream>
using namespace std;

class shape
{
 public:
 void show()
 {
  cout<<"parent class"<<endl;
 }
};

class triangle:public shape
{
public:
 float ans;
 void triangleArea(float h,float b)
 {
  ans=(0.5)*h*b;
 }
void show()
 {
  cout<<"area of the triangle is:"<<ans<<endl;
 }
};

int main()
{
triangle t;
t.triangleArea(23,4.5);
t.show();
}
