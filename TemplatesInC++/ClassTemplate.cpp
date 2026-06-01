#include <iostream>
using namespace std;

template <typename T>
class Box {

    T value;

    public:

    void setValue(T v) {
        value = v;
    }

    T getValue() {
        return value;
    }
};

int main() {

    Box<int> b1;

    b1.setValue(100);

    cout << b1.getValue() << endl;

    Box<string> b2;

    b2.setValue("Hello");

    cout << b2.getValue();

    return 0;
}