
#include<iostream>
using namespace std;

class Arithmatic
{
    public:
    void add()
    {
        int x, y;
        cout<<"\n enter values";
        cin>>x>>y;
        cout<<"\nsum is"<<x+y;
    }

    void add(int x)
    {
        cout<<"\n sum is "<<++x;
    }

    int add(int x, int y)
    {
        return x+y;
    }

    float add(float x, int y)
    {
        return x+y;
    }

    float add( float x,float y, float z)
    {
        return x+y+z;
    }

    float add(int x,float y)
    {
        return x+y;
    }
};

    int main()
    {
        Arithmatic a;
        a.add();
        a.add(10);
        cout<<a.add(20,30);
        cout<<a.add(30.1234f,20);
        cout<<a.add(30,20.4567f);
        cout<<a.add(10.456f,30,54.890f);
        return 0;
    }
