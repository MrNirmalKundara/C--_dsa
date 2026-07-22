#include<iostream>
using namespace std;

int friendpair(int n){
    if(n==1 || n==2){
        return n;
    }

    int ans1 = friendpair(n-1);
    int ans2 = (n-1) * friendpair(n-2);
    return ans1 + ans2;
}
int main(){
    cout << "Number of ways to pair friends: " << friendpair(4) << endl;
    return 0;
}