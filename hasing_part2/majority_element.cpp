#include<iostream>
#include<unordered_map>
using namespace std;

void majorityElement(int arr[], int n) {

    // step 1: create a hash map to store the frequency of each element
    unordered_map<int, int> countMap;
    for (int i = 0; i < n; i++) {
        if(countMap.count(arr[i])){
            countMap[arr[i]]++;
        } else {
            countMap[arr[i]] = 1;
        }
    }

    for(auto it : countMap){
        if(it.second >= n/3){
         cout << "Majority element is: " << it.first << endl;
    }
    }
    cout << endl;   
}

int main() {
    int arr[] = {1,3,3,2,5,1,3,1,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    majorityElement(arr, n);
    return 0;
}