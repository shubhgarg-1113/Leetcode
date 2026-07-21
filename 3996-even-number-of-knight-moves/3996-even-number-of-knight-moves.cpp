class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        if((start[0] + start[1]) % 2 == 0 && (target[0] + target[1]) % 2 == 0){
            return true;
        }
        else if((start[0] + start[1]) % 2 != 0 && (target[0] + target[1]) % 2 != 0){
            return true;
        }
        else
        return false;
    }
};