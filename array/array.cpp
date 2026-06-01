// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>


using namespace std;
int main() {
    //1d array - fixed size
    int arr[5] = {1,2,3,4,5};
    cout << arr[0] << " " << end
    for(int i=0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    //2d ARRAY OT TWO -DIMENSIONAL ARRAY - fixed sized
    int array[3][4] = {
        {1,2,3,5},
        {4,5,6,6},
        {7,8,9,8}
    };
    cout << array[1][1]
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << array[i][j] << " " ;
        }
        cout << endl;
    }
    
    //single-dimensional array of variable size
    vector<int> array1 = {1,2,3,4,5,6,7};
    for(int i=0; i<array1.size(); i++){
        cout << array1[i] ;
    };
    
    //two dimensional array of variable size
    vector<vector<int>> A = {
        {1,2,3,4,4,5},
        {1,2,3,4,4,5},
        {1,2,3,4,4,5},
    };
    
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[0].size();j++){
            cout << A[i][j] << " ";
        };
        cout << endl;
    };
    //more then two-dimensional array multidimesional array
    int arrayMulti[3][2][2] = {
        {
            {1,2},
            {3,4}
        },
        {
            {1,2},
            {3,4}
        },
        {
            {1,2},
            {3,4}
        }
    };
    return 0;
}