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
        
        
        vector<int> devisor;
        
        for(int i=1;i*i<=n;i++){
            if(n % i == 0){
                devisor.push_back(i);
                devisor.push_back(n/i);
            }
        }
        
        vector<long long> prefix(n);
        
        prefix[0] = nums[0];
        
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        
        long long max_diff = -1e18;
        for(int i=0;i<devisor.size();i++){
            int num = devisor[i];
            
            int ind = num - 1;
            
            long long max_sum = -1e18;
            long long min_sum = 1e18;
            for(int j=ind;j<n;j += num){
                long long sum = prefix[j];
                
                if(j - num >= 0) sum -= prefix[j-num];
                
                max_sum = max(max_sum, sum);
                min_sum = min(min_sum, sum);
            }
            
            max_diff = max(max_diff, max_sum - min_sum);
        }
        
        cout<<max_diff<<endl;
    }
    
}