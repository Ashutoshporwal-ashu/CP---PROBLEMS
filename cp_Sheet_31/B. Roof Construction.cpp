#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        
        cin>>n;
        
        int msb = log2(n);
        
        vector<int> res;
        
        int num = pow(2, msb) - 1;
        
        while(num >= 0){
            res.push_back(num);
            num--;
        }
        
        num = pow(2, msb);
        
        while(num < n){
            res.push_back(num);
            num++;
        }
        
        for(int i=0;i<n;i++){
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
