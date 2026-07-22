#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void stockSpan(vector<int> Stock,vector<int> span){
    stack<int> s;
    s.push(0);
    span[0] = 1;

    for(int i=1;i<Stock.size();i++){
        int currPrice = Stock[i];
        while(!s.empty() && currPrice >= Stock[s.top()]){
            s.pop();
        }

        if(s.empty()){
            span[i] = i+1;
        }else{
            int prevHigh = s.top();
            span[i] = i-prevHigh;
        }
        s.push(i);
    }

    for(int i=0;i<span.size();i++){
        cout << span[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> Stock = {100,80,60,70,60,85,100};
    vector<int> span = {0,0,0,0,0,0,0};

    stockSpan(Stock,span);
    return 0;
}