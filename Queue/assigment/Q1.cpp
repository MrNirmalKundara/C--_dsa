#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int TimeRequiredToBuy(vector<int> &ticket,int k){
   int n = ticket.size();
   int ans = 0;

   for(int i=0;i<n;i++){
       if(i<=k){
          ans += min(ticket[i],ticket[k]);
       }else{
        ans += min(ticket[i],ticket[k]-1);
       }
   }

   return ans;
}
int main(){
    vector<int> ticket =  {2,3,2};
    int k = 2;

    cout << TimeRequiredToBuy(ticket,k);
    return 0;
}