#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        int m;
        
        cin>>n>>m;
        
        vector<vector<int>> mat(n, vector<int> (m, 0));
        
        long long total = 0;
        int total_neg = 0;
        
        int mini = 1e9;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a;
                cin>>a;
                
                if(a < 0) total_neg++;
                mat[i][j] = a;
                total += abs(a);
                mini = min(mini, abs(a));
            }
        }
        
        if(total_neg % 2 == 0) cout<<total<<endl;
        else {
            cout<<total - 2 * mini<<endl;
        }
        
    }
}
