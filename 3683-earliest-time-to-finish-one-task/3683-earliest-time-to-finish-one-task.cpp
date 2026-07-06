class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int min = 201;
        for(int i = 0; i<tasks.size(); i++){
            int task = tasks[i][0] + tasks[i][1];
            if(task < min){
                min = task;
            }
        }
        return min;
    }
};