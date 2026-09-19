class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n;
        int sum = 0;
        long long product = 1;
        while(temp > 0){
            int digit = temp % 10;
            sum += digit;
            product *= digit;
            temp /= 10;
        }
        int res = product - sum;
        return res;
    }
};