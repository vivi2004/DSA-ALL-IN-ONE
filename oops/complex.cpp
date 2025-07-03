 #include<bits/stdc++.h>
using namespace std;
  struct Complex
  {
     double real,imag;
  };
      Complex  addTwoNum( const Complex & c1, const  Complex & c2  ) {
          Complex result;
          result.real= c1.real + c2.real;
         result.imag= c1.imag + c2.imag;
         return result;
      }
  
int main () {
      Complex  c1,c2, sum;
    cout<< " Enter the first complex numbers" << endl;
    cin>>c1.real>> c1.imag ;
   cout<< "Enter the second complex numbers"<< endl; 
   cin >> c2.real>> c2.imag;
    sum  =  addTwoNum ( c1,c2);
   cout<< "sum: "<< sum.real<<  "+ "<< sum.imag << "i " << endl;
   return 0;
}