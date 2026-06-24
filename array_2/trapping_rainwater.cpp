#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

void trapwater(int heights[],int n){
        int leftMax[20000], rightMax[20000];
        leftMax[0] = heights[0];
        rightMax[n-1] = heights[n-1];
        cout << leftMax[0] << ",";

        for(int i=1;i<n;i++){
            leftMax[i] = max(leftMax[i-1] , heights[i-1]);
            cout << leftMax[i] << ",";
        }
        cout << endl;
    
        cout << rightMax[0];
        for(int i=n-2;i>=0;i--){
            rightMax[i] = max(rightMax[i+1],heights[i+1]);
            cout << rightMax[i] << ",";
        }
        cout << endl;

        int waterTraped = 0;
        for(int i=0;i<n;i++){
            int currWater = (min(leftMax[i],rightMax[i]) - heights[i]);
            if(currWater>0){
                waterTraped += currWater; 
            } 
        }

        cout << "Water Traped is Equal to : " << waterTraped << endl;
    }

int main(){
    int heights[] = {4,2,0,6,3,2,5};
    int n = 7;

    trapwater(heights,n);
    return 0;
}