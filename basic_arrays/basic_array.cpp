#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int brr[13] = {5,1,2,6,8,96,4};
    cout << arr[4] <<endl;
    cout << sizeof(arr) << endl;

    cout << brr[8]<<endl;

            // printing array value through loop
    int crr[12] = {1,2,6,7,8,9};
    int n = sizeof(crr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout << crr[i] <<" ";
    }  

            // take user input
    int m;
    cout << "enter the length of Array :";
    cin >> m;

    int drr[m];
    int p = sizeof(drr)/sizeof(int);
    cout << "enter the array value one by one :" << endl;
    for(int i=0;i<p;i++){
       cin >> drr[i] ;
    }

    for(int i=0;i<p;i++){
        cout << "array values of index :" << i << " is :" <<drr[i] <<endl;
    }
    return 0;
}