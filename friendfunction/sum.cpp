#include<iostream>
using namespace std;

class triangle
{
 int h,b;
 triangle(int h,int b)
 {
  this->h=h;
  this->b=b;
 }
friend float triangleArea(triangle t);//friend function
void show 


