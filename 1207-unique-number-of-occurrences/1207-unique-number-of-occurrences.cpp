class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> freq;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            freq[arr[i]]++;
        }
        
        unordered_set<int> seenFrequencies;
        
        for(auto it : freq) {
            int currentFreq = it.second;
            if(seenFrequencies.find(currentFreq) != seenFrequencies.end()) {
                return false;
            }
            
            seenFrequencies.insert(currentFreq);
        }
        return true;
    }
};