#include<iostream>
#include<vector>
using namespace std;


          // that is brute Force Approach (time complexitiy is n^2)
// bool PairSum(vector<int> arr,int n, int target){
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(arr[i]+arr[j] == target){
//                      cout << "the pair of sum :" << "(" << arr[i] << "," << arr[j] << ")";
//                      return true;
//                 }
//             }
//         }
//         return false;
// }


           // two pointer Approach
vector<int> PairSum(vector<int> arr,int n,int target){
    int st = 0; int end = n-1;
    int currSum = 0;
    vector<int> ans;
    while(st<end){
           currSum = arr[st]+arr[end];
            if(currSum == target){
               ans.push_back(st);
               ans.push_back(end);
               return ans;
           }
           else if(currSum > target){
            end--;
           }
           else{
            st++;
           }
    }

}

int main(){
    vector<int> arr = {2,7,11,15};
    int n = arr.size();

    vector<int> ans = PairSum(arr,n,18);
    if (ans.size() == 2) {
        cout << "Pair found at indices: (" << ans[0] << ", " << ans[1] << ")" << endl;
        cout << "Values: (" << arr[ans[0]] << ", " << arr[ans[1]] << ")" << endl;
    } else {
        cout << "No pair found!" << endl;
    }
    return 0;
}