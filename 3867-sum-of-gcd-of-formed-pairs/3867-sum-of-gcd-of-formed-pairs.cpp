class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector <int> prefixGcd;
        int n = nums.size();
        long long sum = 0;
        int max = nums[0];
        for(int i = 0; i < n; i++){
            if(nums[i] > max){
                max = nums[i];
            }
            prefixGcd.push_back(gcd(nums[i],max));
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        for(int i = 0; i < n/2; i++){
            sum += gcd(prefixGcd[i],prefixGcd[n - i - 1]);
        }
        return sum;
    }
};