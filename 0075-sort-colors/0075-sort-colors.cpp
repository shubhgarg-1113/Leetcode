class Solution {
public:
    void sortColors(vector<int>& nums) {
        int freq[3] = {0};
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        for(int i = 0; i < freq[0]; i++){
            nums[i] = 0;
        }
        for(int i = 0; i < freq[1]; i++){
            nums[i + freq[0]] = 1;
        }
        for(int i = 0; i < freq[2]; i++){
            nums[i + freq[0] + freq[1]] = 2;
        }
    }
};