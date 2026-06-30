class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
    int freq[60] = {0};
    int count = 0;

    for(int i = 0; i < time.size(); i++){
        int rem = time[i] % 60;

        int target = (60 - rem) % 60;
        count += freq[target];
        freq[rem]++;
    }
    return count;
    }
};