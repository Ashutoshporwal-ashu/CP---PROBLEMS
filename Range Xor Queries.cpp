vector<int> prefix_XOR(vector<int> &nums, vector<vector<int>> &queries){
    int n = nums.size();

    vector<int> prefix(n, 0);
    prefix[0] = nums[0];

    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] ^ nums[i];
    }

    vector<int> res;
    for(int i=0;i<queries.size();i++){
        int l = queries[i][0]; 
        int r = queries[i][1];

        if(l == 0) res.push_back(prefix[r]);
        else res.push_back(prefix[r] ^ prefix[l-1]);
    }

    return res;
}