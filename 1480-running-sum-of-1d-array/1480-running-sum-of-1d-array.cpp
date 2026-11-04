class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> result;
        int n = nums.size();
        int total = 0;
        for(int i= 0 ; i < n ;i++){
            total = total + nums[i];
            result.push_back(total);
        }
        return result;
    }
};