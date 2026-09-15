class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long a = 1;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                a *= 1;
            }
            else if(nums[i] == 0){
                a *= 0;
            }
            else{
                a *= -1;
            }
        }
        if(a == 0){
            return 0;
        }
        else if(a > 0){
            return 1;
        }
        else{
            return -1;
        }
    }
};