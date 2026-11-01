#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        
        cin>>n;
        
        vector<int> a(n);
        vector<int> b(n);
        int maxi1 = 0;
        int maxi2 = 0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi1 = max(maxi1, a[i]);
        }
        
        for(int i=0;i<n;i++){
            cin>>b[i];
            maxi2 = max(maxi2, b[i]);
        }
        
        vector<int> maxi_a(maxi1+1, 0);
        vector<int> maxi_b(maxi2+1, 0);
        
        int i = 0;
        while(i < n){
            int num1 = a[i];
            int count = 0;
            while(i < n && a[i] == num1) {
                count++;
                i++;
            }
            
            maxi_a[num1] = max(maxi_a[num1], count);
        }
        
        i = 0;
        while(i < n){
            int num1 = b[i];
            int count = 0;
            while(i < n && b[i] == num1) {
                count++;
                i++;
            }
            
            maxi_b[num1] = max(maxi_b[num1], count);
        }
        
        int global_maxi = 0;
        int mini = min(maxi_a.size(), maxi_b.size());
        for(int i=0;i<mini;i++){
            int sum = maxi_a[i] + maxi_b[i];
            global_maxi = max(global_maxi, sum);
        }
        
        if(maxi_b.size() > maxi_a.size()){
            for(int i=mini;i<maxi_b.size();i++){
                global_maxi = max(global_maxi, maxi_b[i]);
            }
        }
        
        else if(maxi_b.size() < maxi_a.size()){
            for(int i=mini;i<maxi_a.size();i++){
                global_maxi = max(global_maxi, maxi_a[i]);
            }
        }
        
        cout<<global_maxi<<endl;
        
    }
}
