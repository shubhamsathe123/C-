#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int rn;
    char name[20];
    public:
    student();
    student(student &);
    ~student();
    void display();
};
student:: ~student()
{
    int r;
    rn=r;
  cout<<"\n value of rn"<<rn++;
}
student::student()
{
    rn=100;
    strcpy(name,"Suraj");
    rn++;student();
}
student::student(student &x)
{
    rn=x.rn;
    strcpy(name,x.name);
}
void student::display()
{
    cout<<"\n rollno:"<<rn<<"\tname"<<name;
}
int main()
{
    student s;
{
    student s1(s);
    s.display();
    s1.display();
}
    return 0;
}
/*
o/p:
roolno:101     namesuraj
 roolno:101     namesuraj*/