#include<iostream>
using namespace std;

int tilingProblem(int n){
    if(n==0 || n==1){
        return 1;
    }
    int ans1 = tilingProblem(n-1);
    int ans2 = tilingProblem(n-4);
    int ans3=ans1+ans2;

    return ans3;
}
int main(){
    int n = 6;
    cout << tilingProblem(6);
    return 0;
}