#include <bits/stdc++.h>
using namespace std;

class Hero {

private:
   char level;

public:
   int health;

   int getLevel()
   {
      return level;
   }
   void setLevel(char l)
   {
      level = l;
   }
   int gethealth()
   {
      return health;
   }
   void sethealth(int h)
   {
      health = h;
   }

   Hero() {
       cout<< "Constructor called !!"<< endl;
   }   
     Hero ( int health){

      this->health= health;
     }

     Hero ( int health ,char level){
      this->level = level;
      this->health = health;
     }
      void print() {
        cout << "Health: " << health << ", Level: " << level << endl;
    }
    
};

int main()
{
//   dynamically allocated   ...
   // Hero *h = new Hero;
   // h->sethealth(40);
   // h->setLevel('A');
   // // cout << " health is " << (*h).gethealth() << endl;
   // // cout << "Level is :" << (*h).getLevel() << endl;
   // cout << " health is " << h->gethealth() << endl;
   // cout << "Level is :" << h->getLevel() << endl;

   //  cout << " size of :" << sizeof(viiv) << endl;
   //  cout << " health  is :" << viiv.health << endl;
   // cout << "Level is :" << viiv.level << endl;
//  cout<< "Hie"<<endl;
   // cout<<"Hellow"<<endl;
   //  Hero  viiv(40);
   //  cout<<" Adress of viiv : "<< &viiv<<endl;
     Hero temp ;
     temp( 40,'A');
      temp.print();
   //   cout<< "Adress of temp "<< &temp << endl; 

   // cout << "Level of viiv is:" << viiv.getLevel() << endl;
   // viiv.setLevel('B');
   // cout << "Updated Level  of viiv is :" << viiv.getLevel() << endl;
   // cout << " Health is :" << viiv.gethealth() << endl;
   // viiv.sethealth(50);
// cout << " Updated Level of viiv is" << viiv.gethealth() << endl;
}





