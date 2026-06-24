#include<iostream>
using namespace std;

int printArray(int arr[],int m){
    for(int i=0;i<m;i++){
        cout << arr[i] << "   ";
    }
    cout << endl;
}

void bubble_sort(int arr[],int m){
    bool isSwap = false;
    for(int i=0;i<m-1;i++){
          for(int j=0;j<m-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
          }
        if(isSwap == false){
            return;
        }
    }
    cout << "the sorted Array is : ";
    printArray(arr,m);
    
}

int main(){
    int n;
    cout << "enter the array size : " << endl;
    cin>>n;

    int arr[n];
    cout << "enter array values : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int m = sizeof(arr)/sizeof(int);

    bubble_sort(arr,m);
    return 0;
}