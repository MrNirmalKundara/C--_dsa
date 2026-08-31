#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void SlidingWindow(vector<int> &gate,int k){
  priority_queue<pair<int, int>> pq;

  for(int i=0;i<k;i++){
    pq.push(make_pair(gate[i],i));
  }

  cout << "Output :" <<pq.top().first << " ";

  for(int i=k;i<gate.size();i++){
    while(!pq.empty() && pq.top().second <= (i-k)){
        pq.pop();
    }

    pq.push(make_pair(gate[i],i));
    cout << pq.top().first << " ";
  }
  cout << endl;
}
int main(){
    vector<int> gate = {1,3,-1,-3,5,3,6,7};

    SlidingWindow(gate,3);
    return 0;
}