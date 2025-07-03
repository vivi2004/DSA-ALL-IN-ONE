// Inheritance of the class........
 #include<bits/stdc++.h>
  using namespace std;
 
 class Human {
    public:
    int age;
    int height;
    int weight;
    public :
    void getAge () {
         this->age;
    }

 };

 class Male: public Human {
    string color;
      public:
    void sleep () {
        cout<< " Male is sleeping :"<<endl;
    }

 };

  class Female : public Human {
     string nature; 
      
      public:
     void  anger() {
        cout<< " Female have the anger issue: " << endl;
     } 
  };
    class  Akkai : public Male{  //  multilevel inheritance 
       public: 
        int  BMI;
         void  special() {
            cout<< " He is special in many these things:" << endl;
         }
    };
  
//     multiple inheritance ..
   class Gender: public Male , public Female {
       public:
          int  ews;
           void similarites () {
            cout<< "They  all are human being   " << endl;
           }
   };

 
 int main () {
   Male  soloe;
   Female lili;
   Akkai  obj1;
 Gender  g1;

   //  soloe.sleep();
   //  lili.anger();
   //  obj1.special();
    g1.similarites();


   cout<< " The  ews for the gender is "<< g1.ews<<endl;
   // cout<< " The age of Male is: " <<soloe.age<<endl;
   // cout<<  " The height of  Male is :" << soloe.height<<endl;
   // cout<<  " The weight of female is :" <<soloe.weight<<endl;
   // cout<< " The age of female is :"<< lili.age<< endl;
   //  return 0; 

}
