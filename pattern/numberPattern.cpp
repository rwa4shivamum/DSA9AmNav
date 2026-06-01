#include <iostream>
using namespace std;

int main(){
    int n = 5;

    int emty = 0;
    for(int i=n; i>=1; i--){
        emty += 1;
        for (int i = 1; i < emty; i++)
        {
           cout << "  ";
        };
        for(int j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl; 
    }
    return 0;
}

// 1
// 22
// 333
// 4444

// 1
// 1 2
// 1 2 3
// 1 2 3 4

//54321
// 4321
//  321
//   21
//    1

//5
//4

//()