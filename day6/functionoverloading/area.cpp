
#include<iostream>
using namespace std;

class Area
{
    public:
    int area(int l,int h)
    {
      return l*h;
    }

    float area(int r,float pi)
    {
        return 2*pi*r*r;
    }

    int area(int x)
    {
        return 4*x;
    }
};

int main()
{
    Area a;
    cout<<"\n Area of Rectangle "<<a.area(4,5);
    cout<<"\n Area of Circle "<<a.area(5,3.14f);
    cout<<"\n Area of Square"<< a.area(5);
}
