int compareDecreasing(const void *a, const void *b){
    int int_a = *(const int *)a;
    int int_b = *(const int *)b;

    if (int_a < int_b) return 1;
    if (int_a > int_b) return -1;
    return 0;
}
long long maxSum(int* nums, int numsSize, int k, int mul) {
    long long sum = 0;
    qsort(nums, numsSize, sizeof(int), compareDecreasing);
    int temp = 0;
    while(temp != k){
        if(mul > 0){
            sum += (long long)nums[temp] * mul;
            mul--;
            temp++;
        }
        else{
            sum += nums[temp];
            temp++;
        }
    }
    return sum;
}