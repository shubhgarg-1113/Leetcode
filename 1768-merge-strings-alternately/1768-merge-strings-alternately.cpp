class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        //case 1 both equal
        if(word1.length() == word2.length()){
            for(int i = 0; i < word1.length(); i++){
                res.push_back(word1[i]);
                res.push_back(word2[i]);
            }
        }
        //case 2 str 1 greater
        else if(word1.length() >= word2.length()){
            for(int i = 0 ;i < word2.length(); i++){
                res.push_back(word1[i]);
                res.push_back(word2[i]);
            }
            int n = word2.length();
            while(n < word1.length()){
                res.push_back(word1[n]);
                n++;
            }
        }
        // case 3 str 2 greater
        else{
            for(int i = 0 ;i < word1.length(); i++){
                res.push_back(word1[i]);
                res.push_back(word2[i]);
            }
            int n = word1.length();
            while(n < word2.length()){
                res.push_back(word2[n]);
                n++;
            }
        }
    return res;
    }
};