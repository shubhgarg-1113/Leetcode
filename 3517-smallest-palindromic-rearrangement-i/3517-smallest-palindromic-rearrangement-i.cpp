class Solution {
public:
    string smallestPalindrome(string s) {
        int freq[26] = {0};
        int n = s.size();
        int count = 0;

        for(int i = 0; i < n/2; i++){
            freq[s[i] - 'a']++;
            count++;
        }
        int i = 0;
        int p = 0;

        while(count > 0){
            while(freq[i] > 0){
                s[p++] = (char)('a' + i);
            
            freq[i]--;
            count--;
            }
            i++;
        }
        for(int j = 0 ;j < n/2 ; j++){
            s[n - 1 - j] = s[j];
        }
        return s;
    }
};