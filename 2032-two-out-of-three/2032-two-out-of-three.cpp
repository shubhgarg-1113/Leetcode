class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int freq1[101] = {0};
        int freq2[101] = {0};
        int freq3[101] = {0};
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n3 = nums3.size();
        vector <int> res;
        for(int i = 0; i < n1; i++){
            freq1[nums1[i]]++;
        }
        for(int i = 0; i < n2; i++){
            freq2[nums2[i]]++;
        }
        for(int i = 0; i < n3; i++){
            freq3[nums3[i]]++;
        }
        for(int i = 1; i < 101; i++){
            if((freq1[i] > 0 && freq2[i] > 0) || ((freq1[i]> 0) && (freq3[i] > 0)) || (freq2[i] > 0 && freq3[i] > 0)){
                res.push_back(i);
            }
        }
        return res;
    }
};