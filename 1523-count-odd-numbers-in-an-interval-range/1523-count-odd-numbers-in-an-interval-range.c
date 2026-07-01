int countOdds(int low, int high){
    long long res = (high - low) / 2;
    if(low % 2 != 0 || high % 2 != 0){
        res++;
    }
    return (int)res;
}