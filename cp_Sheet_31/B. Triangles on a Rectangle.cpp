#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int w;
	    int h;
	    
	    cin>>w>>h;
	    
	    int k1;
	    cin>>k1;
	    vector<int> h0(k1);
	    
	    for(int i=0;i<k1;i++){
	        cin>>h0[i];
	    }
	    
	    int k2;
	    cin>>k2;
	    vector<int> h1(k2);
	    
	    for(int i=0;i<k2;i++){
	        cin>>h1[i];
	    }
	       
	    int k3;
        cin>>k3;
        vector<int> y1(k3);
        
        for(int i=0;i<k3;i++){
            cin>>y1[i];
        }
        
        int k4;
        cin>>k4;
        vector<int> y2(k4);
        
        for(int i=0;i<k4;i++){
            cin>>y2[i];
        }
        
        long long maxi = 0;
        
        long long a1 = 1LL * (h0[k1-1] - h0[0]) * h;
        long long a2 = 1LL * (h1[k2-1] - h1[0]) * h;
        long long a3 = 1LL * (y1[k3-1] - y1[0]) * w;
        long long a4 = 1LL * (y2[k4-1] - y2[0]) * w;
        
        maxi = max({a1, a2, a3, a4});
        
        cout<<maxi<<endl;
	    
	}

}
