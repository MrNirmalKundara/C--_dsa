#include<iostream>
using namespace std;

// void func(int arr[]){
//     arr[0] = 400;
//     arr[2] = 123;
// }

// void func1(int *pttr){
//     pttr[0] = 400;
//     pttr[2] = 123;
// }


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    cout << endl;
}
int main(){  
    // int a = 12;
    // int *ptr = &a;
    // cout << ptr << endl;

    // int arr[] = {1,4,2,5,6,7};
    // cout << arr << endl; // store the address

    // cout << *(arr) << endl;  // arr[o]
    // cout << *(arr+1) << endl; // arr[1]
    // cout << *(arr+2) << endl;

    // func(arr);
    // cout << arr[0] << endl;
    //  cout << arr[2] << endl;

    // func1(arr);
    // cout << arr[0] << endl;
    // cout << arr[2] << endl;


    int arr[] = {12,3,54,6};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr,n);

     return 0;
}
