#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void kadane_Subarray(int arr[],int n){
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i=0;i<n;i++){
        currSum = currSum + arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }

    cout << "maximum Subarray Sum : " <<maxSum << endl;}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = 6;

    kadane_Subarray(arr,n);
    return 0;
}