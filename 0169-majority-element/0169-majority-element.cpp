class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int num = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == num){
                count++;
            }
            else if(nums[i] != num && count>0){
                count--;
            }
            else if(nums[i] != num && count == 0){
                num = nums[i];
                count++;
            }
        }
        return num;
    }
};