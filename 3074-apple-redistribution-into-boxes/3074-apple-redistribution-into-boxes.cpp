class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int t_apple = 0;
        for (int a : apple) {
            t_apple += a;
        }
        std::sort(capacity.begin(), capacity.end(), std::greater<int>());
        int temp = t_apple;
        int i = 0;
        while (temp > 0) {
            temp -= capacity[i];
            i++;
        }
        return i;
    }
};