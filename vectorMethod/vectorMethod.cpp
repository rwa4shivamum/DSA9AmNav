#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Elements: ";

    for(int value : v) {
        cout << value << " ";
    }

    cout << endl;

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "First Element: " << v.front() << endl;
    cout << "Last Element: " << v.back() << endl;

    v.pop_back();

    cout << "After pop_back(): ";

    for(int value : v) {
        cout << value << " ";
    }

    return 0;
}