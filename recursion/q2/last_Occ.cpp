#include<iostream>
#include<vector>
using namespace std;

int firOcc(vector<int> arr,int n,int i,int target){
    if(i == -1){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }
    return firOcc(arr,n,i-1,target);
}

int main(){
    vector<int> arr = {1,2,3,3,4,5};
    int n = arr.size();
    cout << firOcc(arr,n,n-1,3);
    return 0;
}