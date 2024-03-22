#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    int x,y;
    cin>>x;
    cin>>y;
    
    int min_dist=nums.size();
    int prev_index=-1;
    
    for(int i=0;i<n;i++){
        if(nums[i]==x || nums[i]==y){
            if(prev_index!=-1 && nums[i]!=nums[prev_index]){
                int distance=i-prev_index;
                if(distance<min_dist){
                    min_dist = distance;
                }
            }
            prev_index = i;
        }
    }
    
    cout<<min_dist;
    
    return 0;
}
