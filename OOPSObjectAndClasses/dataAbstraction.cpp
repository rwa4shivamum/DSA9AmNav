#include <iostream>
using namespace std;

class ATM {
    private:
           int balance = 5000;
    
    public:
           void getBalance(){
               cout << "my current balance was" << balance << endl;
           };
};

class Person {
    
    private:
          string name = "mokshil";
          
    public:
          void getName(){
              cout << name << " here is name" << endl;
          }
};

int main()
{
   Person p1;
//   p1.name = "Mokshil";
   p1.getName();
   //cout << p1.name << "here is direct access" << endl;
    return 0;
}