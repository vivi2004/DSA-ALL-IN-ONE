#include<bits/stdc++.h>
using namespace std;

struct Complex
{
    double real;
     double imag;
};

   Complex  multiComplex ( const Complex & c1, const Complex & c2){
 Complex result;
   result.real= c1.real*c2.real - c1.imag*c2.imag;
   result.imag = c1.real*c2.imag + c1.imag*c2.real;
  }
int main () {
    Complex c1, c2, product;
    cout << "Enter the first complex no."<< endl;
    cin >> c1.real >> c1.imag;
    cout<< " Enter the second complex no. " << endl;
    cin >> c2.real>> c2. imag ;
     product =  multiComplex( c1,c2);
     cout<<" Product:"<< product.real<< "+"<< product.imag<< "i" << endl;
    
}
