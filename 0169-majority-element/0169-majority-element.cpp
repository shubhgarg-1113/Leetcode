class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int num = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == num){
                count++;
            }
            else if(count>0){
                count--;
            }
            else{
                num = nums[i];
                count = 1;
            }
        }
        return num;
    }
};