#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int printArray(int arr[],int n){
    cout << "After the counting sorting : ";
    for(int j=0;j<n;j++){
        cout << arr[j] << " ";
    }
}

void  count_sorting(int arr[],int n){
    int freq[10000];
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]); 
    }
    for(int i=minVal,j=0;i<=maxVal;i++){
        while(freq[i]>0){
              arr[j++] = i;
              freq[i]--;
        }
    }
    printArray(arr,n);
}

int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = 8;

    count_sorting(arr,n);
    return 0;    
}