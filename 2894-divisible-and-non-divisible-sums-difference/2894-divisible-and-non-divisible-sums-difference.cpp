class Solution {
public:
    int differenceOfSums(int n, int m) {
        long divi = 0;
        long ndivi = 0;
        for(int i = 1; i <= n; i++){
            if(i % m){
                divi += i;
            }
            else{
                ndivi += i;
            }
        }
        return (int)divi - ndivi;
    }
};