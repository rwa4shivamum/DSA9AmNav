// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        cout << arr[i] << endl;
    }
    
    //For Each loop (Range-Based Loop)
    for(int value: arr){
        cout << value << " " << endl;
    }
    //no index needed
    //directly gives value
    //cleaner and beginner-friendly
    cout << sizeof(arr) << endl;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << "here actual size" << endl;
    
    int sum = 0;
    for(int value: arr){
        sum += value;
    }
    cout << sum << endl;
    
    int max = 0;
    for(int value: arr){
        if(value > max){
            max = value;
        };
    };
    cout << max << endl;
    
    for(int i=size-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}