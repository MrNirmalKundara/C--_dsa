#include<iostream>
using namespace std;

     // sum of n integer number
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }

     // fibonacci Number
// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibonacci(n-1)+fibonacci(n-2);
// }


     // checked if array is sorted or not
bool isSorted(int arr1[],int n,int i){
    if(i == n-1){
        return true;
    }
    if(arr1[i]>arr1[i+1]){
       return false;
    }
    return isSorted(arr1,n,i+1);
}
int main(){
    // cout << "sum of all digit is..." << sum(5) << endl;

    // cout << fibonacci(6) << endl;

    int arr[] = {1,2,3,4,5};
    int arr1[] = {5,3,2,4,1};
    cout << isSorted(arr1,5,0);
    return 0;
}