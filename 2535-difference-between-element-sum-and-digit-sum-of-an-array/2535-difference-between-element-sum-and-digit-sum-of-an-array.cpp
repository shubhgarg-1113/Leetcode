class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        long long sum = 0;
        long long sum_digits = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            sum += nums[i];
            while(nums[i] > 0){
                int rem = nums[i]%10;
                sum_digits += rem;
                nums[i] /= 10;
            }
        } 
        return abs(sum_digits - sum);
    }
};