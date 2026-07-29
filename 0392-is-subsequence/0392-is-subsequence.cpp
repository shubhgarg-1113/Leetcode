class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.size();
        int m = s.size();
        int j = 0;
        int i = 0;
        while(i < m && j < n){
            if(t[j] == s[i] && i < m && j < n){
                i++;
            }
            else if (j > n){
                break;
            }
            j++;
        }
        return(i == m);
    }
};