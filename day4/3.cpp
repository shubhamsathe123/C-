/*Write a program to implement flight class with data member as flight no.,
 source, destination and fare.  Write a copy constructor and a member
function to display the flight information.*/

#include<iostream>
#include<string.h>
using namespace std;

class Flight
{
	int flight_No;
	char source[20],destn[20];
	float fare;
	public:
	Flight(int fno,char *source,char *destn,float f)
	{
		flight_No=fno;
		strcpy(this->source,source);
		strcpy(this->destn,destn);
		fare=f;
	}
	Flight(const Flight &f)
	{
		cout<<"Copy Constructor Allocating Memory"<<endl;
	}
	void display()
	{
		cout<<"Flight_No:"<<flight_No<<endl;
		cout<<"From Source:"<<source<<endl;
		cout<<"To Destination:"<<destn<<endl;
		cout<<"Fare:"<<fare<<endl;
	}
	void show(Flight f)
	{
		cout<<"Display Method Called"<<endl;
		f.display();
	}
	~Flight()
	{
		cout<<"Freeing Memory!!!!!!"<<endl;
	}
};
int main()
{
	Flight f(123,"Indore","Pune",1545);
	//f.show(f);
	f.display();
	return 0;
}
