#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << "   ";
    }
}
        // reverse Array without extra space
void reverseArray(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start < end){
       int temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;
       start++;
       end--;
    }

    printArray(arr,n);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(int);


             // Reverse Array using extra space
    // int copyArray[n];
    //     // create copy array for reverse value storing
    // for(int i=0;i<n;i++){
    //     int j = n-1-i;
    //     copyArray[j] = arr[i];
    // }
    //    // for copy array changed to original array; 
    // for(int i=0;i<n;i++){
    //     arr[i] = copyArray[i];
    // }
    // printArray(arr,n);


    reverseArray(arr,n);
    return 0;
}