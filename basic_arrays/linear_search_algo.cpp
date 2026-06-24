#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int key){
      for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout << "Key values of index is : ";
            return i;
        }
      }
            cout << "the values is not present in array list :" ;
            return -1;
}
int main(){
    int arr[] = {1,2,3,6,5,2,4,56,77};
    int n = sizeof(arr) / sizeof(int);

    cout << LinearSearch(arr,n,4);
    return 0;
}