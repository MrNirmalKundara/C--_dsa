#include<iostream>
#include<vector>
using namespace std;


void heapify(int i,vector<int> &vec, int &n){
    int left = 2*i+1;
    int right = 2*i+2;
    int maxI = i;

    if(left < n && vec[maxI] < vec[left]){
       maxI = left;
    }

    if(right<n && vec[maxI] < vec[right]){
       maxI = right;
    }

    if(maxI != i){
        swap(vec[i],vec[maxI]);
        heapify(maxI,vec,n);
    }
}
void heap_sort(vector<int> &vec){
    int n = vec.size();

    // step 1 :-- Build a max heap
    for(int i=n/2-1;i>=0;i--){
        heapify(i,vec,n);
    }

    // step 2 :-- taking element to correct position
    for(int j=n-1;j>=0;j--){
        swap(vec[0],vec[j]);
        heapify(0,vec,j);
    }
}
int main(){
    vector<int> vec = {1,4,2,5,3};

    heap_sort(vec);
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }    
    cout << endl;
    return 0;
}