#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums,int target){
    int st = 0;
    int end = nums.size()-1;

    while(st <= end){
        int mid = (st+end)/2;
        if(nums[mid] == target){
            return mid;
        }

        if(nums[st] <= nums[mid]){
               if(nums[st] <= target && target <= nums[mid]){
                    end = mid-1;
               }
               else{
                    st = mid+1;
               }
        }

        else{
            if(target >= nums[mid] && target <= nums[end]){
                st = mid+1;
            }

            else{
                end = mid-1;
            }
        }
    }

    return -1;
}

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 9;

    int result = search(nums,target);

    if(result != -1){
        cout << "the index of target element " << target <<" is " << result <<endl;
    }
    else{
        cout << "the target element is not present in array :" << result << endl;
    }
    return 0;
}