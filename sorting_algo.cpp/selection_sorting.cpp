#include<iostream>
using namespace std;

int printArray(int arr[],int m){
    for(int k=0;k<m;k++){
        cout << arr[k] << "   ";
    }
    cout << endl;
}
void selection_sort(int arr[],int m){
    for(int i=0;i<m-1;i++){
        int minidx = i;
         for(int j=i+1;j<m;j++){
            if(arr[j]<arr[minidx]){
                minidx = j;
            }
         }
        swap(arr[i],arr[minidx]);
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

    selection_sort(arr,m);
    return 0;
}