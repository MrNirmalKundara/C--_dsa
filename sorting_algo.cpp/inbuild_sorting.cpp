#include<iostream>
#include<algorithm>
using namespace std;

int printArray(int arr[],int m){
    for(int i=0;i<m;i++){
        cout << arr[i] << "   ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1,5,4,2,7,8,0,1,4,3};
    int n = 10;

    sort(arr,arr+5);
    printArray(arr,6);

    return 0;
}