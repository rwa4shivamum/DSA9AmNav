// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//1.TNRN
void sum(){
    int a = 10;
    int b = 5;
    cout << a + b << " " << endl;
};
//2.TSRN
void sum1(int a, int b){
    int result = a + b;
    cout << "Sum is:" << result << endl;
};
//3.TNRS
int sum3(){
    int a = 10, b = 20;
    return a + b;
}
//4.TSRS
int sum4(int a, int b){
    return a + b;
}
int main() {
    // Write C++ code here
    //function name(arguments==input){ return output } //how we call a function
    //by using function name(pass as parameter) the only thing we need to just cal//a function
    //1: TNRN(Take Nothing return nothing) //No input as argument and not have return keyword
    //2: TSRN(Take someting return Nothing)// this function takes an input as arguments and return nothing
    //3: TNRS(Take nothing return something)//this function do not takes as an input and return something
    //4: TSRS(Take something return something)//this function takes something and return something
    sum();
    sum1(3,4);
    cout << sum3() << " " << endl;
    cout << sum4(3,5) << " ";
    return 0;
}