#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec1 = {1,2,3,4};
    // vector<int> vec2(10,-4);
    // cout << vec1.size() << endl;
    // cout << vec1[0] << endl;
    // cout << vec1[2] << endl;

    // for(int i=0;i<vec2.size();i++){
    //     cout << vec2[i] << ",";
    // }

          // vector Implemention in memory
    vector<int> vec = {1,2,3,4};
    vector<int> EmpVec;
    cout << "size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(5);
    cout << "size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    cout << "size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    cout << "size : " << EmpVec.size() << endl;
    cout << "Capacity : " << EmpVec.capacity() << endl;
    EmpVec.push_back(1);
    cout << "size : " << EmpVec.size() << endl;
    cout << "Capacity : " << EmpVec.capacity() << endl;
    EmpVec.push_back(2);
    cout << "size : " << EmpVec.size() << endl;
    cout << "Capacity : " << EmpVec.capacity() << endl;
    EmpVec.push_back(3);
    cout << "size : " << EmpVec.size() << endl;
    cout << "Capacity : " << EmpVec.capacity() << endl;
    EmpVec.pop_back();
    cout << "size : " << EmpVec.size() << endl;
    cout << "Capacity : " << EmpVec.capacity() << endl;

    return 0;
}