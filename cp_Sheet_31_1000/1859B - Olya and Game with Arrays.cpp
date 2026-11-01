#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        
        cin>>n;
        
        long long Global_min = INT_MAX;
        long long second_min = INT_MAX;
        long long second_min_sum = 0;
        
        while(n--){
            int size;
            cin>>size;
            
            vector<long long> v(size);
            for(int i=0;i<size;i++){
                cin>>v[i];
            }
            
            sort(v.begin(), v.end());
            
            Global_min = min(Global_min, v[0]);
            second_min = min(second_min, v[1]);
            
            second_min_sum += v[1];
        }
        
        long long total = 0;
        
        total = Global_min + second_min_sum - second_min;
        
        cout<<total<<endl;
    }
}
