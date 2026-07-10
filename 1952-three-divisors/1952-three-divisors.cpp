class Solution {
public:
    bool isThree(int n) {
        int count = 2;//number itself and 1
        for(int i = 2; i <= (n*0.5); i++){
            if(n % i == 0){
                count++;
            }
        }
        return (count==3);
    }
};