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
    
    int max_right = nums[n-1];
    nums[n-1]=-1;
    
    for(int i=n-2;i>=0;i--){
        int temp = nums[i];
        nums[i] = max_right;
        max_right=max(max_right,temp);
    }
    
    
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}
