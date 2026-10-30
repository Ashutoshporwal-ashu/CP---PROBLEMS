#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        
        cin>>n;
        
        string s;
        cin>>s;
        
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);
        
        m1[s[0]]++;
        prefix[0] = 1;
        
        for(int i=1;i<n;i++){
            if(m1.find(s[i]) == m1.end()){
                prefix[i] = prefix[i-1] + 1;
                m1[s[i]]++;
            }
            
            else prefix[i] = prefix[i-1];
        }
        
        m2[s[n-1]]++;
        suffix[n-1] = 1;
        
        for(int i=n-2;i>=0;i--){
            if(m2.find(s[i]) == m2.end()){
                suffix[i] = suffix[i+1] + 1;
                m2[s[i]]++;
            }
            
            else suffix[i] = suffix[i+1];
        }
        
        int maxi = 0;
        for(int i=0;i<n;i++){
            if(i == n-1){
                maxi = max(maxi, prefix[n-1]);
            }
            
            else {
                maxi = max(maxi, prefix[i] + suffix[i+1]);
            }
        }
        
        cout<<maxi<<endl;
    }
}
