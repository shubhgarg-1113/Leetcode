/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int even = 0;
    int odd = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] % 2 == 0){
            nums[i] = 0;
            even++;
        }
        else{
            nums[i] = 1;
            odd++;
        }
    }
    for(int i = 0; i < even; i++){
        nums[i] = 0;
    }
    for(int i = even ; i < even + odd; i++){
        nums[i] = 1;
    }
    *returnSize = numsSize;
    return nums;

}