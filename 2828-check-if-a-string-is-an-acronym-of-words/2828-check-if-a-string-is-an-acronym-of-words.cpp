class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int sum = 0;
    if(words.size() != s.size()){
        return false;
    }
    for(int i =0 ;i < words.size(); i++){
        if(words[i][0] == s[i]){
            sum++;
        }
    }
    if(sum == s.size()){
        return true;
    }
    return false;
    }
};