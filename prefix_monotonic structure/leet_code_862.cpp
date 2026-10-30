class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> prefix(n+1, 0);

        for(int i=1;i<=n;i++){
            prefix[i] = nums[i-1] + prefix[i-1];
        }

        deque<int> dq;
        int minl = INT_MAX;

        for(int i=0;i<=n;i++){
            int curr = prefix[i] - k;


            while(!dq.empty() && prefix[dq.front()] <= curr){
                minl = min(minl, i - dq.front());
                dq.pop_front();
            }

            while(!dq.empty() && prefix[dq.back()] >= prefix[i]){
                dq.pop_back();
            }

            dq.push_back(i);
        }

        return (minl == INT_MAX) ? -1 : minl;
    }
};

// prefix with dq 