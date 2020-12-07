#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	int rn;
	char name[20];
	public:
	Student()
	{
	}
	Student(int rn,char name[20])
	{
		this->rn=rn;
		strcpy(this->name,name);
	}
	void display()
	{
		cout<<"Name:"<<name<<"\t"<<"Roll No.:"<<rn<<endl;
	}
	~Student()
	{
		cout<<"Destructor Called"<<endl;
	}
};
int main()
{
	
	Student s(11,"Profound");
	s.display();
}
