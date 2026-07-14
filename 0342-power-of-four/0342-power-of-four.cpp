class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n < 0) return false;
        long long num = 1;
        while(n > num){
            num *= 4;
        }
        return (num == n);
    }
};