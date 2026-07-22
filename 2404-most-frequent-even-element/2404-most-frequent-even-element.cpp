class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> freq;
        int ans = -1;
        int maxfreq = 0;
        for(int num : nums){
            if(num % 2 == 0){
                freq[num]++;
            }
        }
        for(auto pair : freq){
            int curr = pair.first;
            int curr_f = pair.second;
            if(curr_f > maxfreq){
                maxfreq = curr_f;
                ans = curr;
            }
            else if(curr_f == maxfreq){
                ans = min(ans, curr);
            }
        }
        return ans;
    }
};