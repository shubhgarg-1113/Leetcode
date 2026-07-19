class Solution {
public:
    int digitFrequencyScore(int n) {
        int freq[10] = {0};
        int temp = n;
        int res = 0;
        while(temp > 0){
            int digit = temp % 10;
            freq[digit]++;
            temp /= 10;
        }
        for(int i = 0; i < 10; i++){
            res = i * freq[i] + res;
        }
        return res;
    }
};