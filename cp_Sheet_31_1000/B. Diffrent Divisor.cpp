#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    vector<int> temp(300006, 1);
    for(int i=2;i<=300005;i++){
        if(temp[i] == 1){
            for(int j=2*i;j<=300005;j += i){
                temp[j] = 0;
            }
        }
    }
    
    vector<int> primes;
    for(int i=2;i<=300005;i++){
        if(temp[i] == 1) primes.push_back(i);
    }
    
    int t;
    cin>>t;
    
    while(t--){
        int d;
        cin>> d;
        
        int m = primes.size();
        
        long long req_prime1 = d + 1;
        
        long long p = 0;
        
        for(int i=0;i<m;i++){
            if(primes[i] >= req_prime1) {
                p = primes[i];
                break;
            }
        }
        
        long long req_prime2 = p + d;
        
        long long q = 0;
        
        for(int i=0;i<m;i++){
            if(primes[i] >= req_prime2){
                q = primes[i];
                break;
            }
        }
        
        long long mini = min(p * p * p, p * q);
        
        cout<<mini<<endl;
        
    }
}