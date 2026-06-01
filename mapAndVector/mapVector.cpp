#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    vector <int> numb = {70,60,30,70,20,30,60,30};
    /* countOccurance = {
                     70:1
        }
     */
    map <int,int> countOccurance;
    cout << countOccurance[numb[0]] << endl;
    for(int i=0; i<numb.size(); i++){
        if(countOccurance[numb[i]] == 0){
            countOccurance[numb[i]] = 1;
        }else{
            countOccurance[numb[i]] = countOccurance[numb[i]] + 1;
        }
    }

    for(auto item:countOccurance){
        cout << item.first << " : " << item.second << endl;
    }
    //O(1)=1
    //O(logn)=3
    //O(n)=5
    //O(n+m)=10
    //O(n logn) = (5 * 3) = 15
    // n=5
    // 1 5 = 6
    // 2 5 = 6
    // 3 5 = 6
    // 4 5 = 6
    // 5 6 = 6
    // n=5^5= 25 30
    // for(
    //     for(
    //         for()
    //     )
    // )
    // O(n^2) = 30, O(n^3) = 120 , n!  5!=5*4*3*2*1 = 120, 6! = 720
    return 0;
}