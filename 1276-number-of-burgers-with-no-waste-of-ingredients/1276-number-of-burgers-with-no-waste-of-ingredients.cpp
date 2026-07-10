class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> arr;
        int t = tomatoSlices;
        int c = cheeseSlices;
        int j = t/2 - c;
        int s = c - j;
        if(t % 2 != 0 || j < 0 || s < 0){
            return arr;
        }
        else{
            arr.push_back(j);
            arr.push_back(s);
            return arr;
        }
    }
};