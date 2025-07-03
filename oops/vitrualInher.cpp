//   Polymorphism is a powerful feature of C++ that enables flexible and reusable code. 
//   By understanding and utilizing both compile-time and run-time polymorphism, you can design and implement systems that are easier to maintain and extend. 
//   Whether through function overloading and operator overloading (compile-time) or virtual functions and abstract classes (run-time), 
//   polymorphism provides a robust mechanism for managing different object behaviors through a unified interface.

#include<bits/stdc++.h>
using namespace std;
 class A {
    public:
     int age;
     int height;
     void  sleep () {
        cout<< " They all are sleeping well !!"<< endl;
     };

 };
  class B:  virtual public  A {
    public:
      string color;
  };
  class C :  virtual public  A {
    ///
  };

  class D : public B ,public C{
       public:
      void fetch () {
        cout<< " All data is to be  feteched"<< endl;
      }
  };
  


int main () {
    A  obj1;
  D  p1;
  C  obj2;
   p1.fetch(); 
   obj2.sleep();
 cout<< " The age of D is "<< obj1.age <<endl;
 cout<< " The age of C is "<< obj2.age<< endl;
 cout << " Teh age of D is "<< p1.age<<endl;

}
