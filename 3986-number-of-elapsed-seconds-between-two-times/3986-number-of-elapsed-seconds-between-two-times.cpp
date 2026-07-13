class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hour = ((int)endTime[0] * 10 + (int)endTime[1]) - ((int)startTime[0] * 10 + (int)startTime[1]);
        int min = ((int)endTime[3] * 10 + (int)endTime[4]) - ((int)startTime[3] * 10 + (int)startTime[4]);
        int seconds = ((int)endTime[6] * 10 + (int)endTime[7]) - ((int)startTime[6] * 10 + (int)startTime[7]);
        return hour*3600 + min * 60 + seconds;
    }
};