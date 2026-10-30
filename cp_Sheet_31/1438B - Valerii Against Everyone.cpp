#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        set<int> st;
        
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            st.insert(a);
        }
        
        if(st.size() == n) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
}