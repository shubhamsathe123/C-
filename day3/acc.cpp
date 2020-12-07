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
    void display();
};

student::student()
{
    rn=100;
    strcpy(name,"profound");
    rn++;
}
student::student(student &x)
{
    rn=x.rn;
    strcpy(name,x.name);
}

void student::display()
{
    cout<<"\n roolno:"<<rn<<"\tname"<<name;
}

int main()
{
    student s;
    student s1(s);
    s.display();
    s1.display();
    return 0;
}
