class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        if(purchaseAmount  % 10 > 4){
            return (100 - (purchaseAmount + (10 - (purchaseAmount % 10))));
        }
        else{
            return (100 - (purchaseAmount - (purchaseAmount % 10) ));
        }
    }
};