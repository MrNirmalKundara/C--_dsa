#include<iostream>
#include<queue>
#include<stack>
using namespace std;

        // using recursion
void moverecursion(queue<int> &org,int k){
    if(k==0){
        return;
    }

    int front = org.front();
    org.pop();
    moverecursion(org,k-1);
    org.push(front);

    return;
} 

void firstkreverse(queue<int> &org,int k){
    moverecursion(org,k);

    for(int i=0;i<(org.size()-k);i++){
        org.push(org.front());
        org.pop();
    }

   return;    
}

// void firstkReverse(queue<int> &org,int k){
//     stack<int> s;

//    for(int i=0;i<k;i++){
//         s.push(org.front());
//         org.pop();
//     }

//     for(int i=0;i<k;i++){
//         org.push(s.top());
//         s.pop();
//     }

//     for(int i=0;i<(org.size()-k);i++){
//         org.push(org.front());
//         org.pop();
//     }
// }
int main(){
    queue<int> org;

    for(int i=1;i<=8;i++){
        org.push(i);
    }

    firstkreverse(org,4);

    while(!org.empty()){
        cout << org.front() << " ";
        org.pop();
    }
    return 0;
}