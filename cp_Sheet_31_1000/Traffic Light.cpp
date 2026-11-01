#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
    while(t--){
        
        int n;
        cin>>n;
        
        char c;
        cin>>c;
        
        string s;
        cin>>s;
        
        int i = 0;
        
        int maxi = 0;
        
        s += s;
        
        while(i < s.size()){
            
            int count = 0;
            if(s[i] == c){
                while(i < s.size() && s[i] != 'g'){
                    count++;
                    i++;
                }
            }
            
            maxi = max(maxi, count);
            i++;
        }
        
        
        cout<<maxi<<endl;
    }

}