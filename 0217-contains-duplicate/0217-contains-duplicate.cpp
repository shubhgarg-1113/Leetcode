class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int> num;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(num.count(nums[i]) > 0) {
                return true;
            }
            num[nums[i]] = 1;
        }
        return false;
        }
};