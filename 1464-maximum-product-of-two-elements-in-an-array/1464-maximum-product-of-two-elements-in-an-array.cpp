class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPdt = -1;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                int pdt = (nums[i]-1)*(nums[j]-1);
                if(maxPdt < pdt){
                    maxPdt = pdt;
                }
            }
            
        }
        return maxPdt;
    }
};