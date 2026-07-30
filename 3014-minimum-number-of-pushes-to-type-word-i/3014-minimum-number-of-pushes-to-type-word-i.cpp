class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int count = 0;
        if(n  < 9) return n;
        
        else if (n > 8 && n < 17){
            return ((n - 8) * 2 + 8);
        }
        else if (n > 16 && n < 25){
            return ((n - 16) * 3 + 16 + 8);
        }
        else if (n == 25){
            return 52;
        }
        else{
            return 56;
        }
    }
};