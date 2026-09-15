class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        int freq[201] = {0};
        int max = nums[0];
        int count = 0;
        for(int i = 0; i < n; i++){
            if(max < nums[i]){
                max = nums[i];
            }
            freq[nums[i]]++;
            if(freq[nums[i]] > 1){
                count++;
            }
            if(count > 1){
                return false;
            }
        }
        if(n != max + 1){
            return false;
        }
        for(int i = 1; i < max; i++){
            if(freq[i] != 1){
                return false;
            }
        }
        if(freq[max] != 2){
            return false;
        }
        return true;
    }
};