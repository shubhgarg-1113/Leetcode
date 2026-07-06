int earliestTime(int** tasks, int tasksSize, int* tasksColSize) {
    int min = 201;
        for(int i = 0; i<tasksSize; i++){
            int task = tasks[i][0] + tasks[i][1];
            if(task < min){
                min = task;
            }
        }
        return min;
}