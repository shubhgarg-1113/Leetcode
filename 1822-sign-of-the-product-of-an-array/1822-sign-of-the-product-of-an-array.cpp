class Solution {
public:
    int arraySign(vector<int>& nums) {
        int a = 1;
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
        return a;
    }
};