class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int freq1[26] = {0};
        int freq2[26] = {0};
        int n = jewels.size();
        int m = stones.size();

        for(int i = 0; i < n; i++){
            if(isupper(jewels[i])){
                freq1[jewels[i] - 'A']++;
            }
            else{
                freq2[jewels[i] - 'a']++;
            }
        }
        int count = 0;
        for(int i = 0; i < m; i++){
            if(isupper(stones[i]) && (freq1[stones[i] - 'A'] > 0)){
                count++;
            }
            else if(islower(stones[i]) && (freq2[stones[i] - 'a'] > 0)){
                count++;
            }
        }
        return count;
    }
};