#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int subarraySumK(vector<int> &arr, int k){
    unordered_map<int, int> m;
    m[0] = 1; // Initialize the map with sum 0 having one occurrence
    int sum = 0;
    int count = 0;

    for(int j=0;j<arr.size();j++){
        sum += arr[j];
        if(m.count(sum-k)){
            count += m[sum-k];
        }

        if(m.count(sum)){
            m[sum]++;
        }else{
            m[sum] = 1;
        }
    }

    return count;
}
int main(){
    vector<int> arr = {10,2,-2,-20,10};
    int k = 10;

    cout << subarraySumK(arr, k) << endl;
    return 0;
}