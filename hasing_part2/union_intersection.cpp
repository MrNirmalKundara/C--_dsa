#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int Union(vector<int> &arr1, vector<int> &arr2){
    unordered_set<int> s;

    for(int el1 : arr1){
        s.insert(el1);
    }
    for(int el2 : arr2){
        s.insert(el2);
    }

    for(int el : s){
        cout << el << " ";
    }
    cout << endl;
    return s.size();
}

void Printintersection(vector<int> &arr1, vector<int> &arr2){
    unordered_set<int> s;

    for(int el1: arr1){
        s.insert(el1);
    }

    for(int el2 : arr2){
        if(s.count(el2)){
            cout << el2 << " ";
            s.erase(el2);
        }
    }
    cout << endl;
}
int main(){
    vector<int> arr1 = {7,3,9};
    vector<int> arr2 = {6,3,9,2,9,4};
    cout << "Union size: " << Union(arr1, arr2) << endl;

    cout << "Intersection elements: ";
    Printintersection(arr1, arr2);
    return 0;
}