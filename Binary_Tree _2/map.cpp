#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

int main(){
      // create a map
    map<int, string> m;
       
      // insert elements in map;
    m[101] = "Nirmal";
    m[102] = "Rohit";
    m[122] = "Sahil";

    // print the map
    cout << m[122] << endl;
    cout << m[102] << endl;
    cout << m[101] << endl;

     // update the map value
     m[101] = "Nirmal Kumar";
     cout << m[101] << endl;

      // check if a key is present in the map or not
    cout << m.count(101) << endl;
    cout << m.count(103) << endl;

      // for access all element in map at same time
    for(auto it : m){
        cout << "key: " << it.first << ", value: " << it.second << endl;
    }

    for(auto it : m){
        cout << it.first * 2 << endl;
    }

    return 0;
}