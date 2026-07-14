class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n < 0) return false;
        long long num = 1;
        while(n > num){
            num *= 3;
        }
        return (num == n);
    }
};