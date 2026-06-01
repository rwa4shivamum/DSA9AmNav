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
        int marks;
        
        void input(){
            cin >> name >> marks;
        }
        
        void diplay(){
            cout << name << "--" << marks << endl;
        }
};
int main()
{
    Student s[3];
    //[{undefined}, undefined, undefined]
    for(int i=0; i<3; i++){
        s[i].input();
    }
    
    for (int i=0; i<3; i++){
        s[i].diplay();
    }
    return 0;
}