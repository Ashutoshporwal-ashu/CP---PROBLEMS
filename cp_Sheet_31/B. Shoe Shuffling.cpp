#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>> n;
        
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        bool Possible = true;
        int i = 0;
        
        vector<int> res;
        while(i < n){
            int count = 0;
            int num = v[i];
            int ind = i;
            
            while(i < n && v[i] == num){
                count++;
                i++;
            }
            
            if(count == 1) {
                Possible = false;
                break;
            }
            
            for(int j=ind;j<i-1;j++){
                res.push_back(j+2);
            }
            
            res.push_back(ind+1);
            
        }
        
        if(!Possible){
            cout<<-1<<endl;
        }
        
        else{
            for(int i=0;i<res.size();i++){
                cout<<res[i]<<" ";
            }
            
            cout<<endl;
        }
    }
}
