#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
			int n;
			cin>>n;
			
			vector<int> v(n);
			for(int i=0;i<n;i++){
				cin>>v[i];
			}
			
			vector<pair<long long, long long>> buildings(n);
			
			for(int i=0;i<n;i++){
				buildings[i] = {v[i], i};
			}
			
			sort(buildings.rbegin(), buildings.rend());
			long long cordinate = 1;
			
			vector<long long> res(n+1, 0);
			res[0] = 0;
			
			long long minutes = 0;
			for(int i=0;i<n;i++){
				res[buildings[i].second + 1] = cordinate;
				minutes += (2 * abs(cordinate) * buildings[i].first);
				
				if(cordinate < 0){
					cordinate = abs(cordinate) + 1;
				}
				
				else{
					cordinate = -cordinate;
				}
			}
			
			cout<<minutes<<endl;
			
			for(int i=0;i<=n;i++){
				cout<<res[i]<<" ";
			}
			
			cout<<endl;
	}

}
