

#include <iostream>
using namespace std;

class Animal{
    public:
         void eat(){
             cout << "Animal can Eat" << endl;
         }
};

class Dog : public Animal {
    public:
          void bark(){
              cout << "Dog can Bark" << endl;
          }
};
//multilevel inheritance, multiple inheritance, hierarchical inheritance, hybrid inheritance
class Labrador: public Animal, public Dog{
    
};

int main()
{
    std::cout<<"Hello World";
    Labrador l;
    l.eat();
    l.bark();
    return 0;
}