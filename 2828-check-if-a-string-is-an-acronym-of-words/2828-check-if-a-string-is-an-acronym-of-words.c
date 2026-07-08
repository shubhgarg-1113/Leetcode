bool isAcronym(char** words, int wordsSize, char* s) {
    int sum = 0;
    if(wordsSize != strlen(s)){
        return false;
    }
    for(int i =0 ;i < wordsSize; i++){
        if(words[i][0] == s[i]){
            sum++;
        }
    }
    if(sum == strlen(s)){
        return true;
    }
    return false;
}