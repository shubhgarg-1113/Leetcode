class Solution {
public:
    int factorial(int num){
        int fact = 1;
        for(int i = 2; i <= num;i++){
            fact *= i;
        }
        return fact;
    }

    int nPr(int n, int r){
        if(r>n) return 0;
        return factorial(n) / factorial(n - r); 
    } 
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) return 1;
        int total = 10; // for len = 1
        for(int k = 2; k <= n; k++){
            total += 9 * nPr(9,k-1);
        }
        return total;
    }
};