#include<iostream>
#include<vector>
using namespace std;
template<class T>
class stack{
public:
    vector<T> vec;

    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout <<"the stack is empty.." << endl;
            return;
        }
        vec.pop_back();
    }

    T top(){
        // if(isEmpty()){
        //     cout <<"the stack is empty.." << endl;
        //     return -1;
        // }
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }

    bool isEmpty(){
        return vec.size() == 0;
    }
};

int main(){
    stack<string> s;
    s.push("nirmal");
    s.push("hello");
    s.push("how are you");
    s.push("fine");

//    cout << s.top();

    while(!s.isEmpty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}