#include <bits/stdc++.h>
using namespace std;

class school  
{
public:
  int std;
  char grade;
   string name;
  school()
  {
    cout << " Executed successfully !!" << endl;
    string  name[100];
  }
  // school(int std, char grade)
  // {
  //   this->grade = grade;
  //   this->std = std;
  //   cout << " The grade of the class in a school is " << this->grade << endl;
  //   cout << " The class in a school is " << this->std << endl;
  // }

  //  char getName( char *name) {
  //      return name;
  //  }
  void print()
  {
    cout << endl;
    cout << "[ Name:" << this->name << " , ";
    cout << "grade:" << this->grade << " ,";
    cout << " class " << this->std << " ]";
  }
};

int main()
{
  //  school();
  school DAV();
  // //  copy constructor parameters...

  // school SVM(DAV);
  // SVM.print();
  // DAV.print();
  school stXaviers;
  school svm;
  stXaviers.name = " vivieshi ";
  stXaviers.grade = 'A';
  stXaviers.std = 17;
  stXaviers.print()
  
  // cout<< " The name is :" << stXaviers.getName()<<endl;

  // cout<<" The output of the outcome is :"<<&DAV<<endl;

}
