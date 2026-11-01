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
        
        int count = 0;
        
        int op = 0;
        int cl = 0;
        
        for(int i=0;i<n;i++){
            if(s[i] == ')') cl++;
            else op++;
            
            if(cl > op){
                count = max(count, cl - op);
            }
        }
        
        cout<<count<<endl;
    }
}