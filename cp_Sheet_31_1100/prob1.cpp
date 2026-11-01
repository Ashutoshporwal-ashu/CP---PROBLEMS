#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        vector<vector<long long>> temp(n, vector<long long>(2, 0));

        for(int i=0;i<n;i++){
            temp[i][0] = v[i];
            temp[i][1] = i;
        }

        sort(temp.begin(), temp.end());
        
        vector<long long> prefix(n, 0);
        prefix[0] = temp[0][0];

        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + temp[i][0];
        }
        
        vector<long long> ans(n);

        for(int i=0;i<n;i++){
            long long count = 0;
            long long sum = prefix[i];

            if(i > 0) sum = prefix[i-1] + temp[i][0];

            count += i;

            for(int j=i+1;j<n;j++){
                if(sum >= temp[j][0]){
                    count++;
                    sum += temp[j][0];
                }

                else break;
            }

            ans[temp[i][1]] = count;
        }
        
        
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        
        cout<<endl;

    }
}
