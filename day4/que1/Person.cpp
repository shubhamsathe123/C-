#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	int id;
	char name[20];
	public:
	Person()
	{
	}
	Person(int id,char name[20])
	{
		this->id=id;
		strcpy(this->name,name);
	}
	void display()
	{
		cout<<"Name:"<<name<<"\t"<<"Work Id:"<<id<<endl;
	}
	~Person()
	{
		cout<<"Destructor Called"<<endl;
	}
};
int main()
{
	
	Person s(111,"Profound");
	s.display();
}
