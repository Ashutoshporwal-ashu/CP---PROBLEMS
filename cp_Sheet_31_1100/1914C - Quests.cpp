#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>> t;
    
    while(t--){
        int n, k;
        
        cin>> n>>k;
        
        vector<long long> a(n);
        vector<long long> b(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        
        vector<long long> maxi(n, 0);
        maxi[0] = b[0];
        
        for(int i=1;i<n;i++){
            maxi[i] = max(maxi[i-1], b[i]);
        }
        
        long long global_max = INT_MIN;
        long long sum = 0;
        for(int i=0;i<min(n, k);i++){
            
            sum += a[i];
            
            int p = k - (i + 1);
            
            long long curr = sum + p * maxi[i];
            
            global_max = max(global_max, curr);
        }
        
        cout<<global_max<<endl;
        
    }
}