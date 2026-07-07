long long sumAndMultiply(int n) {
    long long res = 0;
    int temp = n;
    while (temp > 0){
        int digit = temp % 10;
        if(digit != 0){
            res = res * 10 + digit;
        }
        temp /= 10;
    }
    long long temp2 = res;
    long long res2 = 0;
    while (temp2 > 0){
        int digit2 = temp2 % 10;
        res2 = res2 * 10 + digit2;
        temp2 /= 10;
    }
    long long sum = 0;
    long long temp3 = res2;
    // reverse the number as it is stored in reversed
    while(temp3 > 0){
        sum += temp3 % 10;
        temp3 /= 10;
    }
    long long result = sum * res2;
    return result;
}