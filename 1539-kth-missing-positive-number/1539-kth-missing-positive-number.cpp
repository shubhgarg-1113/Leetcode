class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int freq[2001] = {0};
        for(int i = 0; i < arr.size(); i++){
            freq[arr[i]]++;
        }
        vector <int> res;
        int count = 0;
        for(int i = 1; i < 2001; i++){
            if(freq[i] == 0){
                count++;
                res.push_back(i);
            }
        }
        return res[k - 1];
    }
};