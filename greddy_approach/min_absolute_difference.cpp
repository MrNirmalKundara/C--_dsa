#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minAbsoluteDiff(vector<int> &A,vector<int> &B){

    // step 1 :-- sort the both vector
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    int n = A.size();
    int AbDiff = 0;
    for(int i=0;i<n;i++){
        AbDiff += abs(A[i]-B[i]);
    }

    cout << "Min Absolute Difference is :" << AbDiff << endl;
    return AbDiff;
}

int main(){
    vector<int> A = {4,1,8,7};
    vector<int> B = {2,3,6,5};
    
    minAbsoluteDiff(A,B);
    return 0;
}