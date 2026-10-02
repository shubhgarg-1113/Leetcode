class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int water = 0;
        int result = -1;
        int i = 0;
        int j = n -1;
        while(i != j && i < n && j < n){
            water = (j - i) * (min(height[j],height[i]));
            result = max(result,water);
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return result;
    }
};