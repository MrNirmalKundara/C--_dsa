#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> ht;
    ht["apple"] = 5;
    ht["banana"] = 10;
    ht["orange"] = 15;
    ht["mengo"] = 15;   // update value of existing key

    cout << ht["apple"] << endl;

    ht.erase("orange");

    for(pair<string,int> element : ht){
        cout << element.first << ": " << element.second << endl;
    }

    if(ht.count("banana")){
        cout << "banana exists in the hash table." << endl;
    } else {
        cout << "banana does not exist in the hash table." << endl;
    }
    return 0;
}