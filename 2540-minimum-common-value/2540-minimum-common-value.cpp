class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int c = min(n,m);
        for(int i  = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(nums1[i] < nums2[j]){
                    break;
                }
                if(nums1[i] == nums2[j]){
                    return nums1[i];
                    break;
                }
                
            }
        }
        return -1;
    }
};