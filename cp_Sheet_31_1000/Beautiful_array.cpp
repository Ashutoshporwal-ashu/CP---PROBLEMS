#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        long long n, k, b, s;
        
        cin>>n>>k>>b>>s;
        
        long long mini = k * b;
        long long maxi = k * b + n * (k - 1);
        
        bool possible = true;
        if(s < mini || s > maxi) cout<<-1<<endl;
        
        else {
            vector<long long> res(n, 0);
            res[0] = mini;
            s -= mini;
            long long sum = s;
            for(int i=0;i<n;i++){
                long long add = min(k-1, s);
                res[i] += add;
                s -= add;
            }
            
            for(int i=0;i<n;i++){
                cout<<res[i]<<" ";
            }
            
            cout<<endl;
        }
        
    }
}