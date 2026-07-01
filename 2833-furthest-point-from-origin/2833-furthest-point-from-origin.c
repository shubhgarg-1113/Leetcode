int furthestDistanceFromOrigin(char* moves) {
    int freq[2] = {0};
    int n = strlen(moves);
    for(int i = 0; i < n; i++){
        if(moves[i] == 'L'){
            freq[0]--;
        } 
        else if(moves[i] == 'R'){
            freq[0]++;
        }
        else{
            freq[1]++;
        }
    }
    return (abs(freq[0]) + freq[1]);
}