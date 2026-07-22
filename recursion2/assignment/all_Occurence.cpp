#include<iostream>
using namespace std;

void allOccur(int arr[],int n,int i,int key){
    if(i == n){
        return;
    }
    if(arr[i] == key){
        cout <<"the Occurrence of "<< key <<" is at index: "<< i << endl;
    }
    allOccur(arr,n,i+1,key);
}
int main(){
    int arr[] = {1, 2, 3, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    allOccur(arr, n, 0, key);
    return 0;
}