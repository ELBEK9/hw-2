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
    
    vector<int> result(n);
    int max_right = -1;
    for(int i=n-1;i>=0;i--){
        int current = nums[i];
        result[i] = max_right;
        max_right=max(max_right,current);
    }
    
    
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    
    return 0;
}
