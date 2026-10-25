#include<iostream>
#include<unordered_map>
using namespace std;

  // Approach 1 : brute force ( time complexity :-- o(n^2) )
// int largestSubArrayWithsum0(int arr[], int n){
//     int maxi = 0;
//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             if(sum == 0){
//                 maxi = max(maxi,j-i+1);;
//             }
//         }
//     }
//     return maxi;
// }

int largestSubArrayWithsum0(int arr[],int n){
    unordered_map<int, int> m;
    int sum = 0;
    int ans = 0;

    for(int j=0;j<n;j++){
        sum += arr[j];
        if(m.count(sum)){
            int currleng = j-m[sum];
            ans = max(ans,currleng);
        }else{
            m[sum] = j;
        }
    }
    return ans;
}
int main(){
    int arr[] = {15,-2,2,-8,1,7,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << largestSubArrayWithsum0(arr, n) << endl;
    return 0;
}