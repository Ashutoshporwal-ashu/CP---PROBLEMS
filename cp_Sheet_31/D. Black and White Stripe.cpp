#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n, k;
        
        cin>>n>>k;
        
        string s;
        cin>>s;
        
        vector<int> v(n);
        for(int i=0;i<n;i++){
            if(s[i] == 'B') v[i] = 1;
            else v[i] = 0;
        }
        
        vector<int> prefix(n, 0);
        prefix[0] = v[0];
        
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + v[i];
        }
        
        int l = 0;
        int r = k-1;
        int mini = 1e9;
        while(r < n){
            int sum = 0;
            
            if(l == 0) sum = prefix[r];
            else sum = prefix[r] - prefix[l-1];
            
            mini = min(mini, k - sum);
            l++;
            r++;
        }
        
        cout<<mini<<endl;
    }
}
