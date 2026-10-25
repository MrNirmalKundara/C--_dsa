#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;

int main(){
    // unordered_set<int> s;

    set<int> s;

    s.insert(5);
    s.insert(10);
    s.insert(13);
    s.insert(34);
    s.insert(15);
    s.insert(5);

    cout << "Size of the set: " << s.size() << endl;

    s.erase(13);
    if(s.find(10) != s.end()){    // s.end == NULL means
        cout << "10 exists in the set." << endl;
    } else {
        cout << "10 does not exist in the set." << endl;
    }

    for(auto element : s){
        cout << element << endl;
    }
    return 0;
}