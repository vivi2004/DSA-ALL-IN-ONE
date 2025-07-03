 //   Abstraction in cpp is basically hidding  the main working function and show only the main content
//  it has a abstract class in which virtual functions are defined and it's necessary to have it..........
#include<iostream>
using namespace std;


class shape
{
public:
   virtual void  draw() = 0; // virtual function
   virtual double  area() = 0; // Another virtual function......
};

class Circle : public shape
{
public:
  double radius;
  Circle(double r) : radius(r) {}
  void draw() override
  {
    cout << "Drawing Circle" << endl;
  }
  double area() override
  {
    return 3.1459 * radius * radius;
  }
};

int main()
{
 
   Circle c (4.3);
   c.draw();
   cout<< "The area of the circle is :" << c.area()<<endl;

}
