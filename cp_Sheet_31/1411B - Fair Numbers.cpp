#include <bits/stdc++.h>
using namespace std;
 
bool isFair(long long n){
    
    long long x = n;
    while(x > 0){
        int rem = x % 10;
        if(rem != 0 && n % rem != 0) return false;
        
        x = x / 10;
    }
    
    return true;
}
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        
        while(!isFair(n)){
            n++;
        }
        
        cout<<n<<endl;
        
    }
}