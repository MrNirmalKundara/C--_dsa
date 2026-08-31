#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
        // for max heap (maximum value ke liye)
    // priority_queue<int>  pq; 

        // for minimum Heap (minimum values ke liye)
    // priority_queue<int, vector<int>, greater<int>> pq;

     // for string data type
    priority_queue<string, vector<string>, greater<string>> pq;

    // pq.push(23);
    // pq.push(12);
    // pq.push(45);
    // pq.push(13);

    pq.push("hello_world");
    pq.push("nirmalkundara");
    pq.push("everyOne");
    pq.push("boy");

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    // cout << pq.top() << endl;

    return 0;
}