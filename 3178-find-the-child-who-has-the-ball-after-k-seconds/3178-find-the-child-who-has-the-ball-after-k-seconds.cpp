class Solution {
public:
    int numberOfChild(int n, int time) {
        int passes = time / (n - 1);
        int remainder = time % (n - 1);
        
        int result;
        if (passes % 2 == 0) {
            // Moving forward
            result = 1 + remainder;
        } else {
            // Moving backward
            result = n - remainder;
        }
        return result - 1;
    }
};