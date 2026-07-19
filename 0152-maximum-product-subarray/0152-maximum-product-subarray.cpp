class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        long long max = 0;
        for(int i = 0; i < nums.size(); i++){
            long long product = nums[i];
            for(int j = i + 1; j < nums.size(); j++){
                product *= nums[j];
                if(max < product){
                    max = product;
                }
            }
            if(max < nums[i]){
                max = nums[i];
            }
        }
        return max;
    }
};