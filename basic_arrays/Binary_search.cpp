#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
    int st = 0;
    int end = n-1;
    while(st <= end){
        int mid = (st + end)/2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid]<key){
                st = mid + 1;
        } else{
            end = mid - 1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {1,4,6,7,9,12,14,17,18,20};
    int n = sizeof(arr) / sizeof(int);

   cout << "the key in array of index is : " <<  binary_search(arr,n,18) << endl;


       // Array pointer acts like a constant pointer.
    
       // the value is not a constant pointer
    int a = 12;
    int *ptr = &a;
    int b = 12;
    ptr = &b;
    cout << b << endl;

    int brr[] = {1,8,3,4,5};
    cout << brr[0] << endl;

            // it is not posible because array pointer is constant array.
    // int y = 12;
    // arr = &y;
    // cout << arr << endl;
    return 0;
}