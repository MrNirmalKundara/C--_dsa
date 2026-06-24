#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void MaxSubArray(int arr[],int n){
    int maxSum = INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum = 0;
            for(int i=start;i<=end;i++){
                currSum += arr[i];
            }
            cout << currSum << ",";
            maxSum = max(maxSum,currSum);
        }
        cout<<endl;
    }

    cout << "maximum SubArray sum : " << maxSum << endl;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = 6;

    MaxSubArray(arr,n);
    return 0;
}
