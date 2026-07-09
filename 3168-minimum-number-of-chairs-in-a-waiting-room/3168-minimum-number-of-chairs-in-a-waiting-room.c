int minimumChairs(char* s) {
    int freq = 0;
        int max = 0;
        for(int i = 0; i < strlen(s); i++){
            if(s[i] == 'E'){
                freq++;
                if(freq > max){
                    max = freq;
                }
            }
            else{
                freq--;
            }
        }
        return max;
}