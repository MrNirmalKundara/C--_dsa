#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
    return p1.second<p2.second;
}
int maxlengthPair(vector<pair<int ,int>> &pairs){
    int n = pairs.size();
    sort(pairs.begin(),pairs.end(),compare);

    int length = 1;
    int currEnd = pairs[0].second;
    cout << "Activity select P0\n";

    for(int i=1;i<n;i++){
        if(pairs[i].first >= currEnd){
            length++;
            currEnd = pairs[i].second;
        }
    }
    cout << "the maximum length is : " << length << endl;
    return length;
}

int main(){
    vector<pair<int, int>> pairs(5,make_pair(0,0));
    pairs[0] = make_pair(5,24);
    pairs[1] = make_pair(39,60);
    pairs[2] = make_pair(5,28);
    pairs[3] = make_pair(27,40);
    pairs[4] = make_pair(50,90);

    for(int i=0;i<pairs.size();i++){
        cout <<"A"<<i << " Activity" << "(" << pairs[i].first 
        << "," << pairs[i].second << ")" << endl;
    }

    maxlengthPair(pairs);

    return 0;
}