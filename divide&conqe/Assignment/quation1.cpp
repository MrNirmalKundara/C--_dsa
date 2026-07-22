#include<iostream>
#include<vector>
using namespace std;

void merge(string str[],int si,int mid,int ei){
    vector<string> temp;
    int i = si;
    int j = mid+1;

    while(i<=mid && j<=ei){
        if(str[i]<str[j]){
            temp.push_back(str[i]);
            i++;
        }else{
            temp.push_back(str[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(str[i]);
        i++;
    }
    while(j<=ei){
        temp.push_back(str[j]);
        j++;
    }
    for(int k=si,x=0;k<=ei;k++){
        str[k] = temp[x++];
    }
}
void mergeSort(string str[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid = si+(ei-si)/2;
    mergeSort(str,si,mid);
    mergeSort(str,mid+1,ei);

    merge(str,si,mid,ei);
}
void printArray(string str[],int n){
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
}
int main(){
    string str[] = {"sun","earth","mars","mercury"};
    int n = 4;

    mergeSort(str,0,n-1);
    printArray(str,n);

    return 0;
}