#include <iostream>
#include <vector>
using namespace std;
vector<int> mergeTwoSortedArr(const vector<int>& arr1,const vector<int>& arr2){
    vector<int> mergeSortedArr;
    int i=0;
    int j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            mergeSortedArr.push_back(arr1[i]);
            i += 1;
        }else{
            mergeSortedArr.push_back(arr2[j]);
            j += 1;
        }
    };
    while (j < arr2.size())
    {
        mergeSortedArr.push_back(arr2[j]);
        j += 1;
    }

    while (i < arr1.size())
    {
        mergeSortedArr.push_back(arr1[i]);
        i += 1;
    }

    for(int i=0; i<mergeSortedArr.size(); i++){
        cout << "," << mergeSortedArr[i];
    };
    return mergeSortedArr;
};


int main(){
    vector <int> arr1Sort = {1,3,5,7,9,11,18,19,20,21,22,23};
    //                                    i
    vector <int> arr2Sort = {2,4,6,8,10,12,14,16};
    
    //                                  j
    // mergeSortedArr={1,2,3,4,5,6,7,8,9,10,11,12}
    // mergeSortedArr={1,2,3,4,5,6,7,8,9,10,11}
    // i=0; j=0
    // while(i<arr1Sort.size() && j<arr2Sort.size())
    mergeTwoSortedArr(arr1Sort, arr2Sort);
    return 0;
}
/*
{8, 6, 4, 2, 1, 4, 5, 69, 5, 3, 312, 32}
{1,2,4,4,5,6,8} {69, 5, 3, 312, 32}
 {69, 5, 3, 312, 32}
{69,5,3}{312,32}
{69,5}{3}
{69}{5}



*/