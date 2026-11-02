#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int> nums(n);
        
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        
        int sum = 0;
        
        int maxi = INT_MIN;
        
        for(int i=0;i<n;i++){
            sum += nums[i];
            
            maxi = max(maxi, sum);
            
            if(sum < 0) sum = 0;
            
            if(i + 1 < n && abs(nums[i]) % 2 == abs(nums[i+1]) % 2){
                sum = 0;
            }
        }
        
        cout<<maxi<<endl;
    }
    
}