class Solution {
public:
    int smallestNumber(int n) {
        int k = log2(n) + 1;
        cout << (k);
        cout << pow(2, k);
        return (pow(2,k) - 1);
    }
};