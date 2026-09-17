class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int freq[1001] = {0};
        vector<int> res;
        int n = nums1.size();
        int n2 = nums2.size();
        for(int i = 0; i < n; i++){
            freq[nums1[i]]++;
        }
        for(int i = 0; i < n2; i++){
            if(freq[nums2[i]] != 0){
                res.push_back(nums2[i]);
                freq[nums2[i]] = 0;
            }
        }
        return res;
    }
};