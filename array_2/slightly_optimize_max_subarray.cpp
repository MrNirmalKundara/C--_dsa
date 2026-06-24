#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

void maxSubArray2(int arr[],int n){
    int maxSum = INT_MIN;

    for(int start=0;start<n;start++){
        int CurrSum = start;
        for(int end=start;end<n;end++){
            CurrSum = CurrSum + arr[end];
            maxSum = max(maxSum,CurrSum);
        }
    }

    cout << "maximun SubArray sum = " << maxSum << endl;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = 6;

    maxSubArray2(arr,n);
    return 0;
}