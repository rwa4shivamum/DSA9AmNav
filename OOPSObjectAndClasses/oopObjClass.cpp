// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//below was for Rectangle
class Rectangle {
    public: 
         int length, width;
         
         int area(){
             return length*width;
         };
         
         int perimeter(){
             return 2 * (length + width);
         };
};
//Bank System
class BankAccount {
    public:
          string name;
          int balance = 0;
          
        void deposit(int amount){
            balance += amount;
            cout << "Deposited: " << amount << endl;
        };
        void withdraw(int amount){
            balance -= amount;
            cout << "WithdrawThisMusch: " << amount << endl;
        };
        void displayBalance(){
            cout << "Balance: " << balance << endl;
        }
};
//Inventory Manage
class Item {
    public:
          string name;
          int quantity;
          
        void sellItem(int qty){
            quantity -= qty;
            
            if(quantity >= 0){
                cout << "Remaining: " << quantity << endl;
            }else{
                cout << "Out of Stock" << endl;
            }
        }
};

int main() {
    // Write C++ code here
    // Rectangle r;
    
    // r.width = 20;
    // r.length = 10;
    
    // cout << "Area: " << r.area() << endl;
    // cout << "Perimeter: " << r.perimeter() << endl;
    // BankAccount b;
    // b.deposit(1000);
    // b.displayBalance();
    // b.withdraw(200);
    // b.displayBalance();
    
    Item i;
    i.quantity = 10;
    
    i.sellItem(5);
    i.sellItem(10);
    return 0;
}
// r = {
//     length:10,
//     width:20
// }
// r.length * r.width