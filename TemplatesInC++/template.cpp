#include <iostream>
using namespace std;
//Function Template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {

    cout << add(2, 3) << endl;

    cout << add(2.5, 3.5) << endl;
    return 0;
}