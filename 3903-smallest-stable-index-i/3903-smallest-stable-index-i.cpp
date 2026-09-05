class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        long res;
        for(int i = 0; i < n; i++){
            long maximum = nums[0];
            long minimum = nums[i];
            for(int j = 0; j <= i; j++){
                maximum = max(maximum, (long)nums[j]);
            }
            for(int l = i; l < n; l++){
                minimum = min(minimum, (long)nums[l]);
            }
            res = maximum - minimum;
            if(res <= k){
                return i;
            }
        } 
        return -1;
    }
};