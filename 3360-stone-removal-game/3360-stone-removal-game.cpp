class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10){
            return false;
        }
        int remove = 10;
        int pile = n;
        int turn = 1;
        while(pile >= remove){
            pile -= remove;
            remove--;
            turn++;
        }
        return (turn % 2 == 0);
    }
};