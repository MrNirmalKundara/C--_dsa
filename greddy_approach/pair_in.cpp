#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> p1,pair<int, int> p2){
    return p1.second<p2.second;
}

int main(){
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

     // sort the paired vector based on the end time
    sort(activity.begin() ,activity.end() ,compare); 

     
    cout << ".............after the sorted ..." << endl;
    for(int i=0;i<activity.size();i++){
        cout <<"A"<<i << " Activity" << "(" << activity[i].first 
        << "," << activity[i].second << ")" << endl;
    }
    return 0;
}