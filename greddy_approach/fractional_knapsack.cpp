#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// bool compare(pair<double,int> p1, pair<double,int> p2){
//     return p1.first>p2.first;
// }

int fractionKnapsack(vector<int> &val, vector<int> &wt, int w){
    int n = val.size();
    vector<pair<double, int>> radio(3,make_pair(0.0,0));

    for(int i=0;i<n;i++){
        double r = val[i]/(double)wt[i];
        radio[i] = make_pair(r,i);
    }

    // sort(radio.begin(),radio.end(),compare);

    sort(radio.begin(),radio.end(),[](pair<double,int> &a, pair<double,int> &b){
        return a.first > b.first;
    });
    
    int ans = 0;
    for(int i=0;i<n;i++){
        int Idx = radio[i].second;
        if(wt[Idx] <= w){
           ans += val[Idx];
           w -= wt[Idx];
        }else{
            ans += (radio[i].first)* w;
            w=0;
            break;
        }
    }
    cout << "Max value of : " << ans << endl;
    return ans;
}

int main(){
    vector<int> val = {60,100,120};
    vector<int> wt = {10,20,30};
    int w = 50;
    
    fractionKnapsack(val,wt,w);
    return 0;
}