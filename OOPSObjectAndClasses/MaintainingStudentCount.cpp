/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Student {
    public:
        string name;
        static int count;
        
        Student(){
            count++;
        }
        
        void input(){
            cin >> name;
        }
        
        void display(){
            cout << name << endl;
        }
};

int Student::count = 0;
int main()
{
    Student s[3];
    //[{undefined}, undefined, undefined]
    for(int i=0; i<3; i++){
        s[i].input();
    }
    
    for (int i=0; i<3; i++){
        s[i].display();
    };
    
    cout << "TotalStudentsEnrolled" << Student::count << endl;
    return 0;
}