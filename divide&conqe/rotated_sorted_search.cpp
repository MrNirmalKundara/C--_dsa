#include<iostream>
using namespace std;

int Search(int arr[],int si,int ei,int target){
    if(si>ei){
        return -1;
    }
    int mid = si+(ei-si)/2;

    if(arr[mid] == target){
        return mid;
    }

    if(arr[si] <= arr[mid]){  // for L1 
        if(arr[si] <= target && target <= arr[mid]){  // left half
            return Search(arr,si,mid-1,target);
        }else{  // right half
            return Search(arr,mid+1,ei,target);
        }
    }else{
        if(arr[mid] <= target && target <= arr[ei]){
             return Search(arr,mid+1,ei,target);
        }else{
            return Search(arr,si,mid-1,target);
        }
    }
}
int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int n = 7;

    cout << "Idx of.. " << Search(arr,0,n-1,1) << endl;
    return 0;
}