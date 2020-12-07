#include<iostream>
using namespace std;

class Circle
{
   float pi=3.14,ans;

   public:
   void circleArea(float r)
   {
      ans=pi*r*r;
   }

   void display()
   {
     cout<<"Area of circle is:"<<ans<<endl;
   }
};

int main()
{
  float r;
  Circle c;
  cout<<"Enter value:"<<endl;
  cin>>r;
  c.circleArea(r);
  c.display();
}
