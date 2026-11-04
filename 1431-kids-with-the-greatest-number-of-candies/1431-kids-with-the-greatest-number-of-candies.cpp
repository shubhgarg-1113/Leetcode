class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int n = candies.size();
        int maximum = INT_MIN;
        for(int i = 0; i < n; i++){
            maximum = max(maximum, candies[i]);
        }
        for(int i = 0; i < n; i++){
            if((candies[i] + extraCandies) >= maximum){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};