#include<iostream>
using namespace std;

float pi=3.14;
int r;

class sphere
{
 int r;
 double surface,volume;

 public:
 void getsphere()
 {
    surface=4*(pi*r*2);   //surface of the sphere
    cout<<"\n Area of sphere :"<<surface;
 }

 void getvolume()
 {
    volume=4/( 3*pi*r*3);  //volume of the sphere
    cout<<"\n Volume of sphere :"<<volume;

 }
};

int main()
{
    cout<<"\n Enter the Radius";
    cin>>r;
    sphere s;
    s.getsphere();
}
