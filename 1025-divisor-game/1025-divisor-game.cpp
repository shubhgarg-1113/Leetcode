class Solution {
public:
    bool divisorGame(int n) {
        int count = 1;
        while(n > 0){
            int x;
            for(int i = 1; i <= n / 2; i++){
                if(n % i == 0){
                    count++;
                    x = i;
                    break;
                }
            }
            n = n - x;
        }
        return (count % 2 == 0);
    }
};