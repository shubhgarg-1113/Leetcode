class Solution {
public:
    bool validDigit(int n, int x) {
        int temp = n;
        int isoccur = 0;
        int isnotstart = 1;
        while(temp > 9){
            int digit = temp % 10;
            if(digit == x){
                isoccur = 1;
            }
            temp /= 10;
        }
        if(temp == x){
            isoccur = 1;
            isnotstart = 0;
        }
        return (isoccur && isnotstart);
    }
};