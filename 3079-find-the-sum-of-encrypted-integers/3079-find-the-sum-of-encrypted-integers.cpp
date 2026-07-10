class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int max_d = 0;
            int temp = nums[i];
            int number = 0;
            int count = 0;
            while(temp>0){
                count++;
                int digit = temp % 10;
                max_d = max(max_d,digit);
                temp /= 10;
            }
            while(count >= 0){
                number += pow(10,count - 1);
                count--;
            }
            res += number * max_d;
        }
        return res;
    }
};