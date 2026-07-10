class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> arr;
        for(int i = left; i <= right; i++){
            int temp = i;
            int c = 0;
            while(temp > 0){
                int digit = temp % 10;
                if(digit == 0){
                    c = 1;
                    break;
                }
                if(i % digit != 0){
                    c = 1;
                    break;
                }
                temp /= 10;
            }
            // if c = 0 add number to the new vector arr
            if(c == 0){
                arr.push_back(i);
            }

        }
        return arr;
    }
};