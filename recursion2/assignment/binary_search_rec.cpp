#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key){
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        return mid;
    }else if(arr[mid] > key){
        return binarySearch(arr,s,mid-1,key);
    }else{
        return binarySearch(arr,mid+1,e,key);
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    int result = binarySearch(arr, 0, n-1, key);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    }else{
        cout << "Element not found" << endl;
    }
    return 0;
}