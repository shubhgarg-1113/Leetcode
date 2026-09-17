class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[27] = {0};
        int n = magazine.size();
        for(int i = 0; i < n; i++){
            freq[magazine[i] - 'a']++;
        }
        for(int i = 0; i < ransomNote.size(); i++){
            freq[ransomNote[i] - 'a']--;
            if(freq[ransomNote[i] - 'a'] < 0){
                return false;
            }
        }
        return true;
    }
};