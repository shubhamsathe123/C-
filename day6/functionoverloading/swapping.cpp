#include <iostream>
using namespace std;

class one
{
public:
    void Swap(int a, int b)
    {
        int temp;
        cout << "\nEnter two numbers to swap";
        cin>>a>>b;
        temp=a;
        a=b;
        b=temp;
        cout << "\nAfter swapping- \nFirst Number is : " << a << "\nSecond Number is: " << b;
    }

    void Swap(char x,char y)
    {
        char tmp;
        cout<<"\Enter characters to swap";
        cin>>x>>y;
        tmp=x;
        x=y;
        y=tmp;
        cout<<"\nAfter swapping :- \nFirst Character: " << x << "\nSecond Character: " << y;
    }
};

int main()
{
    one two;
    int a,b,ch;
    char x,y;

    cout<< "\nEnter your choice:\n1.Numbers\t2.Characters";
    cin>>ch;

    switch (ch)
    {
    case 1:
        two.Swap(a,b);
        break;

    case 2:
       two.Swap(x,y);
       break;

    default:
        cout << "\nPlease enter correct choice";
        break;
    }
    cout << "\nThank You!!\n";
}
