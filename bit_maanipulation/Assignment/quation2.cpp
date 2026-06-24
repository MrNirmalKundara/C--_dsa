#include<iostream>
using namespace std;

int SingleNum(int arr[],int n){
       int result = 0;
       for(int i=0;i<n;i++){
            result ^= i;
       }
       return result;
}

int main(){
    int arr[] = {6,1,2,3,1,2,3};
    cout << SingleNum(arr,7);
    return 0;
}