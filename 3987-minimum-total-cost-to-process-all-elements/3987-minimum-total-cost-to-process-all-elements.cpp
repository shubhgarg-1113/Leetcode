class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long total_cost = 0;
        long long p = 1;
        long long val = k;
        long long MOD = 1000000007;
        long long x = -1;
        long long curr_k = k;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= curr_k){
                curr_k -= nums[i];
            }
            else{
            x = ceil((double)(nums[i] - curr_k) / val);
                curr_k = curr_k + val * x;

                long long term = (2 * p + x - 1) % MOD;
                long long cost = (x % MOD * term) % MOD;
                cost = (cost * 500000004) % MOD;
                total_cost += cost;
                total_cost %= MOD;
                p = p + x;
                curr_k -= nums[i];
            }
        }
        return total_cost;
    }
};