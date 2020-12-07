#include<iostream>
using namespace std;
class AOperations
  {
    int a,b;
    public:
    AOperations(int a,int b)
     {
       this->a=a;
       this->b=b;
     }
   void add();
   void sub();
   void mul();
   void div();
 };

void AOperations::add()
 {
  cout<<"Addition of a :"<<a<<" and b:"<<b<<"is a :"<<(a+b)<<endl;
 }

void AOperations::sub()
 {
  cout<<"Substraction of a :"<<a<<" and b:"<<b<<"is a :"<<(a-b)<<endl;
 }

void AOperations::mul()
 {
 cout<<"Multiplication of a :"<<a<<" and b:"<<b<<"is a :"<<(a*b)<<endl;
 }

void AOperations::div()
 {
  cout<<"Division of a :"<<a<<" and b:"<<b<<"is a :"<<(a/b)<<endl;
 }

int main()
 {
  int x,y,ch;
  cout<<"Enter 2 No's :\n";
  cin>>x>>y;
  AOperations m(x,y);

cout<<"1.Add\n2.Sub\n3.Mul\n4.Div\nEnter Your Choice"<<endl;
cin>>ch;
switch(ch)
{
case 1 :m.add();break;
case 2 :m.sub();break;
case 3 :m.mul();break;
case 4 :m.div();break;
default :cout<<"Please Enter Valid Choice :"<<endl;
}
}

