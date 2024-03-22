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
    cin>>x>>y;
    
    int min_dist=n;
    int prev_index=-1;
    
    for(int i=0;i<n;i++){
        if(nums[i]==x || nums[i]==y){
            if(prev_index!=-1 && nums[i]!=nums[prev_index]){
                min_dist=min(min_dist,i-prev_index);
            }
            prev_index = i;
        }
    }
    
    cout<<min_dist;
    
    return 0;
}
