// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// class Student {
//     public:
//       Student (){
//           cout << "constructor called";
//       };
// };
//1.default constructor (no Parameter passed)
// class Student {
//     public:
//           string name;
//           Student(){
//               name = "shivam",
//               cout << "Default Contructor Called" << endl;
//           }
          
//           void display() {
//               cout << name;
//           }
// };
//2.Paramterized Constructor
// class Student {
//     public:
//         string name;
//         int age;
        
//         Student(string n, int a){
//             name = n;
//             age = a;
//         }
        
//         void display() {
//             cout << "Name: " << name << endl;
//             cout << "Age: " << age << endl;
//         }
// };
//3.Copy Constructor
class Student {
    public:
        string name;
    
        Student(string n){
            name = n;
        };
        
        //copy Constructor
        Student(const Student &obj){
            name = obj.name;
        };
        
        void display(){
            cout << name;
        }
};
int main() {
    // Write C++ code here
    // Student s1("Rahul", 20);
    // Student s2("Shivam", 23);
    // s2.display();
    // s1.display();
    Student s1("Shivam");
    
    Student s2 = s1;
    s2.display();
    return 0;
}