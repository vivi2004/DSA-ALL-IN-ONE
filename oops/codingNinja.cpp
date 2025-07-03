#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
  // Complete this class
public:
    int real,imaginary;
     ComplexNumbers( int r,int m){
        real = r;
        imaginary = m;
    }
       ComplexNumbers plus ( const  ComplexNumbers &c) const{
            int realPart = real+c.real;
            int imagPart = imaginary +c.imaginary;
            return ComplexNumbers(realPart,imagPart);
       }
        ComplexNumbers multiply ( const ComplexNumbers &c ) const {
            int realPart =( (real*c.real) - ( imaginary*c.imaginary) );
            int imagPart= (imaginary*c.real)+ ( real*c.imaginary);
            return  ComplexNumbers ( realPart,imagPart);
        }

        void print(){
            if ( imaginary >=0)   {
             cout<< real<< "+"<< imaginary<< "i"<<endl;
            }
            else {
                cout<< real<< "-"<< -imaginary<< "i" << endl; 
            }
        }
};




















int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}