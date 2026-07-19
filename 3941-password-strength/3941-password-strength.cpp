class Solution {
public:
    int passwordStrength(string password) {
        int freq[66] = {0};
        int res = 0;
        for(int i = 0; i < password.size(); i++){
            if(password[i] >= 'a' && password[i] <= 'z'){
                freq[password[i] - 'a']++;
                if(freq[password[i] - 'a'] == 1){
                    res++;
                }
            }
            else if (password[i] >= 'A' && password[i] <= 'Z'){
                freq[password[i] - 'A' + 26]++;
                if(freq[password[i] - 'A' + 26] == 1){
                    res = res + 2;
                }
            }
            else if(password[i] >= '0' && password[i] <= '9'){
                freq[password[i] - '0' + 52]++;
                if(freq[password[i] - '0' + 52] == 1){
                    res = res + 3;
                }
            }
            else{
                if(password[i] == '!'){
                    freq[62]++;
                    if(freq[62] == 1){
                        res = res + 5;
                    }
                }
                else if(password[i] == '@'){
                    freq[63]++;
                    if(freq[63] == 1){
                        res = res + 5;
                    }
                }
                else if(password[i] == '#'){
                    freq[64]++;
                    if(freq[64] == 1){
                        res = res + 5;
                    }
                }
                else if(password[i] == '$'){
                    freq[65]++;
                    if(freq[65] == 1){
                        res = res + 5;
                    }
                }
            }
        }
        return res;
    }
};