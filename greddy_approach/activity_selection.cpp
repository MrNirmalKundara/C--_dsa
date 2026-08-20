#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int activitySelection(vector<pair<int, int>> &activity){
    int n = activity.size();
    if(n == 0){
        return 0;
    }

    int count = 1;
    // A0 select
    int currEnd = activity[0].second;
    cout << "Activity select A0\n";

    for(int i=1;i<n;i++){
        if(activity[i].first >= currEnd){
            cout << "Activity select A" << i << endl;
            count++;
            currEnd = activity[i].second;
        }
    }
    return count;
}

int main(){
    // vector<int> start = {1,3,0,5,8,5};
    // vector<int> end = {2,4,6,7,9,9};
    // cout << "Max activity by one person : " << activitySelection(start,end);


        // making a pair
    vector<int> start = {0,1,2};
    vector<int> end = {9,2,4};

        // method 1
    // vector<pair<int, int>> activity(3,make_pair(0,0));
    // activity[0] = make_pair(0,9);
    // activity[1] = make_pair(1,2);
    // activity[2] = make_pair(2,4);

       // method 2
    vector<pair<int, int>> activity;
    for(int i=0;i<start.size();i++){
        activity.push_back(make_pair(start[i],end[i]));
    }

    for(int i=0;i<activity.size();i++){
        cout <<"A"<<i << " Activity" << "(" << activity[i].first 
        << "," << activity[i].second << ")" << endl;
    }

    sort(activity.begin(),activity.end(),compare);

    cout << "......sorted activity....." << endl;
    for(int i=0;i<activity.size();i++){
        cout <<"A"<<i << " Activity" << "(" << activity[i].first 
        << "," << activity[i].second << ")" << endl;
    }

    cout <<  "Max activity by one person : " <<  activitySelection(activity);

    return 0;
}