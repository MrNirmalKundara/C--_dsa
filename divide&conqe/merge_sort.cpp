#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int si,int mid,int ei){
    vector<int> temp;
    int i = si;
    int j = mid+1;
    while(i<=mid && j<=ei){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;   
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=ei){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k=si,x=0;k<=ei;k++){
        arr[k] = temp[x++];
    }
}
   // time complexity = O(nlogn)
   // space complexity = O(n)
void mergeSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid = si+(ei-si)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    
    merge(arr,si,mid,ei);
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {6,3,7,5,2,4};
    int n = 6;

    mergeSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}