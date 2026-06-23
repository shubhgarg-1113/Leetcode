class Solution {
public:
    bool isPalindrome(int x) {
        
    if (x<0){
        return false;
    }
    else {
        int temp = x;
        int num = x;
        long long rev = 0;
        while (num > 0) {    
        rev = num % 10 + rev * 10;
        num /= 10;
        }
        return temp == rev;
    }
    }
};