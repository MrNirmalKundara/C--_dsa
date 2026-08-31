#include<iostream>
#include<queue>
#include<string>
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

            // Priority Queue for Objects  
class student{
    public:
      string name;
      int marks;
    
    student(string name,int marks){
      this->name = name;
      this->marks = marks;
    }

    bool operator < (const student &obj) const{
        return this->marks > obj.marks;
    }
};

            // Priority Queue for Pair
struct ComparePair{
    bool operator() (pair<string, int> &p1, pair<string, int> &p2){
        return p1.second > p2.second;
    }
};
int main(){

             // for priority Queue store the objects
    // priority_queue<student > pq;
    // pq.push(student("Nirmal",29));
    // pq.push(student("ram",30));
    // pq.push(student("ashish",31));

    // while(!pq.empty()){
    //     cout << pq.top().name << "=" << pq.top().marks << endl;
    //     pq.pop();
    // }

    priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair>pq;
    pq.push(make_pair("nirmal",29));
    pq.push(make_pair("ram",30));
    pq.push(make_pair("ashish",31));

    while(!pq.empty()){
        cout << pq.top().first << "=" << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}