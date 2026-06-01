// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//n=4, pos = 3
void insert(int arr[], int &n, int pos, int value){
    for(int i=n; i > pos; i--){
        arr[i] = arr[i - 1];
    };
     arr[pos] = value;
     n++;
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " " << endl;
    }
}
void update(int arr[], int pos, int value){
    arr[pos] = value;
}

void deleteElement(int arr[], int &n, int pos){
    for(int i=pos; i < n-1; i++) arr[i] = arr[i+1];
    n--;
}

int main() {
    // Write C++ code here
    int arr[100], n=0;
    int choice, pos, value;
    do{
        cout << "\n1.Insert\n2.Display\n3.Update\n4.Delete\n5.Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice){
            case 1:
               cout << "Enter position & new Value:";
               cin >> pos; 
               cin >> value;
               insert(arr, n, pos, value);
               break;
            case 2:
               display(arr,n);
               break;
            case 3:
               cout << "Enter position:";
               cin >> pos;
               cout << "Enter new Value:";
               cin >> value;
               update(arr, pos, value);
               break;
            case 4:
              cout << "Enter position to delete";
              cin >> pos;
              deleteElement(arr, n, pos);
              break;
        }
    }while(choice !=5 );
    return 0;
}