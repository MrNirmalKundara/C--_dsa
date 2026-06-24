#include<iostream>
#include<vector>
using namespace std;

vector<int> Mis_Match(vector<int> nums){
    int st=0,end = nums.size()-1;
    vector<int> ans;
    while(st<end){
        if(nums[end] > nums[st]){
            st++;
            end--;
        }
        else if(nums[st] == nums[end]){
            ans.push_back(nums[end]);
            ans.push_back(nums[end]+1);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4,5,5,7};
    
    vector<int> ans = Mis_Match(nums);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}