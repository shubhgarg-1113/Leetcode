int numPairsDivisibleBy60(int* time, int timeSize) {
    int freq[60] = {0};
    int count = 0;

    for(int i = 0; i < timeSize; i++){
        int rem = time[i] % 60;

        int target = (60 - rem) % 60;
        count += freq[target];
        freq[rem]++;
    }
    return count;
}