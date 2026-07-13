class Solution {
public:
    bool isPalindrome(string s) {
        vector <char> p;
        int valid_c = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'|| s[i] >= '0' && s[i] <= '9'){
                p.push_back(tolower(s[i]));
                valid_c++;
            }
        }
        for(int i = 0; i < valid_c/2; i++){
            if(p[i] != p[valid_c - 1 - i]){
                return false;
            }
        }
        return true;
    }
};