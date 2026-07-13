class Solution {
public:
    int countSeniors(vector<string>& details) {
        //12- 13
        // 11 - 12
        int count = 0;
        for(int i = 0; i < details.size(); i++){
            int age = int(details[i][11] - '0') * 10 + int(details[i][12] - '0');
            if(age > 60){
                count++;
            }  
        }
        return count;
    }
};