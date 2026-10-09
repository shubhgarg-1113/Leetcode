class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int count = 0;
        while(i < n - 1){
            if(nums[i + 1] <= nums[i]){
                count++;
                nums[i+1]++;
            }
            else{
                i++;
            }
        }
        return count;
    }
};