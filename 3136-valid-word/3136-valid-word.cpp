class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if(n < 3){
            return false;
        }
        int isvowel = 0;
        int isconsonant = 0;
        for(int i = 0; i < n; i++){
            if(!isalnum(word[i])){
                return false;
            }
            if(isalpha(word[i])){
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O'|| word[i] == 'U'){
                isvowel = 1;
            }
            else{
                isconsonant++;
            }
            }
        }
        return(isvowel && isconsonant);
    }
};