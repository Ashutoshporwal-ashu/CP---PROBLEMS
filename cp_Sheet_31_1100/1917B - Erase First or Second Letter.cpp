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
        
        set<int> st;
        int count = 0;
        
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            
            count += st.size();
        }
        
        cout<<count<<endl;
    }
}