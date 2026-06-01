// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    //pointer of vartiable
    int number  = 0; //number is an house name 0 belong in that house address
    int *p = &number;
    int **pp = &p;
    //cout << p << " " << pp;
    
    //pointer of array 
    int arr[3] = {1,2,3};
    //here my array name itself store the adrres of an array
    cout << arr << " here was an array " << *arr << *(arr+1) << *(arr+2) << endl;
    
    //Arrray of pointer
    int a = 10;
    int b = 20;
    int c = 30;
    int *array[3] = {&a, &b, &c};
    
    cout << *array[0];
    cout << *array[1];
    return 0;
}
//0x7ffce3b9db04 
