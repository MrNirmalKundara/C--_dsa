#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> Sum_3(vector<int> nums,int n){
      sort(nums.begin(),nums.end());
    
      for(int i=0;i<n;i++){
        int fix = nums[i];
        int st = i+1;
        int end = n-1;
        vector<int> ans;

        while(st<end){
            if(fix+nums[st]+nums[end] == 0){
                ans.push_back(fix);
                ans.push_back(nums[st]);
                ans.push_back(nums[end]);
            }
            else {
                if(nums[st]<nums[end]){
                    st++;
                }
                else{
                    end--;
                }
            }
        }
      }
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    int n = nums.size();

    Sum_3(nums,n);
    return 0;
}