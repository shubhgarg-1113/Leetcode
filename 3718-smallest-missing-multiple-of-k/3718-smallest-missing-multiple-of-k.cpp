class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int freq[101] = {0};
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }

        int count = 1;
        while(true){
            int multiple = k * count;

            if(multiple > 100 || freq[multiple] == 0){
                return multiple;
            }
            count++;
        }
    }
};