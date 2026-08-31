#include<iostream>
#include<vector>
using namespace std;

class Heap{
    vector<int> vec;
 public:   

    void push(int val){
        // step 1 :
        vec.push_back(val);

        // step 2 :- fix heap
        int x = vec.size()-1;   // child Index
        int pareI = (x-1)/2;

        while(pareI>=0 && vec[x]>vec[pareI]){
            swap(vec[x],vec[pareI]);
            x = pareI;
            pareI = (x-1)/2;
        }
    }

    void heapify(int i){
        int l = 2*i+1;
        int r = 2*i+2;

        int maxI = i;
        if(vec[i] < vec[l] && l < vec.size()){
            maxI = l;
        }

        if(vec[i] < vec[r] && r < vec.size()){
            maxI = r;
        }

        swap(vec[i],vec[maxI]);
        if(maxI != i){
            heapify(maxI);
        }
    }
    void pop(){
        // step 1 :-- swap
        swap(vec[0],vec[vec.size()-1]);

        // step 2 :-- delete the last Node
        vec.pop_back();

        // step 3 :-- heapify
        heapify(0);
    }
    int top(){
        return vec[0];
    }
    bool empty(){
        return vec.size()==0;
    }
};

int main(){

    Heap heap;
    heap.push(8);
    heap.push(4);
    heap.push(5);
    heap.push(1);
    heap.push(2);
    heap.push(9);

    cout << "top = " << heap.top() << endl;
    heap.pop();
    cout << "top : " << heap.top() << endl;
    return 0;
}