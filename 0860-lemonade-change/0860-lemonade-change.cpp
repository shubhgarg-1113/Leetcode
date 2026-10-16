class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int five = 0;
        int tens = 0;
        int total = 5 * five + 10 * tens;
        for(int i = 0; i < n; i++){
            if(bills[i] == 5){
                five++;
            }
            else if(bills[i] == 10){
                tens++;
                if(five > 0){
                    five--;
                }
                else{
                    return false;
                }
            }
            else{
                if(tens > 0 && five > 0){
                    tens--;
                    if(five > 0){
                        five--;
                    }
                }
                else if(tens == 0 && five >= 3){
                    five = five - 3;
                }
                else{
                    return false;
                }
            
            }
        }
        return true;
    }
};