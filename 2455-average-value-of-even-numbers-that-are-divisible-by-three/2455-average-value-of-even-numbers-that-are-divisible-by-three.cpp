class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 3 == 0 && nums[i] % 2 == 0){
                n++;
                sum += nums[i];
            }
        }
        if(n == 0) return 0;
        return sum/n;
    }
};