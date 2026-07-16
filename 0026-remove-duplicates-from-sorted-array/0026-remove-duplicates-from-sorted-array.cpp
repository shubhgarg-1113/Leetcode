class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int count = 1;
        while(j<n){
            if(nums[j] == nums[i]){
                j++;
            }
            else{
                swap(nums[j],nums[i+1]);
                i++;
                j++;
                count++;
            }
        }
        return count;
    }
};