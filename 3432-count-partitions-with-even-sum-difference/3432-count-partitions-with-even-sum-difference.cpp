class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = 0;
        int count = 0;
        for(int i = 0; i < nums.size();i++){
            total += nums[i]; 
        }
        for(int i = 0; i < nums.size() - 1; i++){
            int j = i + 1;
            int sum_l = nums[0];
            int sum_r = total - sum_l;
            if((sum_l - sum_r) % 2 == 0){
                sum_l += nums[j];
                sum_r -= nums[j];
                j++;
                count++;
            }
        }
        return count;
    }
};