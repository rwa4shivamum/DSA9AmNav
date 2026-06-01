#include <iostream>
using namespace std;
//poly(Many)+morphism(Forms)
//One thing behaving in many Forms
//one person: he/she can be act like teacher , act like parent, act like friend but the person remain same 
//why do we use Polymorpism
//Reuse Code, increse flexibilty, reducer complexity, achieve dynamic behaviour, improve maintainability
//Types of Polymorpism 1:compile Time Polymorpism(When decisoin make while compilation)  2:Run Time Polymorpism()
class Math {
    public:
         int add(int a, int b){
             return a + b;
         }
         
         int add(int a, int b, int c){
             return a + b + c;
         }
};

class Print {
    public:
        void show(int a){
            cout << "Integer:" << a << endl;
        }
        void show(double b){
          cout << "Double:" << b << endl;
        }
};
//Run time polymorphism
//when functoin call is decided execution (runtime), it is called Runtime polymorphism

//method overide
class Animal {
    public:
         void sound(){
             cout << "Animal makes sound" << endl;
         }
};

class Dog: public Animal {
    public:
         void sound(){
             cout << "Dog barks" << endl;
         }
};
int main()
{
    // Math m;
    // cout << m.add(10, 20) << endl;
    // cout << m.add(10, 20, 30) << endl;
    // float num = 89.47;
    // cout << num << endl;
    // Print p;
    // p.show(10);
    // p.show(5.6);
    Dog d;
    d.sound();
    return 0;
}