#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void nextGreater(vector<int> arr,vector<int> ans){
    stack<int> s;
    int Idx = arr.size()-1;
    ans[Idx] = -1;
    s.push(arr[Idx]);

    for(Idx = Idx-1;Idx>=0;Idx--){
        int curr = arr[Idx];
        while(!s.empty() && curr>=s.top()){
            s.pop(); 
        }

        if(s.empty()){
            ans[Idx] = -1;
        }else{
            ans[Idx] = s.top();
        }
        s.push(curr);
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> arr = {6,8,0,1,3};
    vector<int> ans = {0,0,0,0,0};

    nextGreater(arr,ans);
    return 0;
}