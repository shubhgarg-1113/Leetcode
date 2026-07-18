class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        long long sum = 0;
        while(i < j){
            long long value = 1;
            int temp = nums[j];
            while(temp  > 0){
                value *= 10;
                temp /= 10;
            }
            cout << value << endl;
        
            value *= nums[i];
            value += nums[j];
            cout << value << endl;   
            sum += value;
            i++;
            j--;
        }
        if(nums[i] == nums[j] && i == j){
            sum += nums[i];
        }
        return sum;
    }
};