class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector <int> res;
        int freq[10001] = {0};
        int n= nums.size();
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
            if(freq[nums[i]] == 2){
                res.push_back(nums[i]);
            }
        }
        int k = 1;
        while(freq[k] > 0){
            k++;
        }
        res.push_back(k);
        return res;
    }
};