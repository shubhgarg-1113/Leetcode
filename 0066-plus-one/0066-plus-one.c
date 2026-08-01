/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int n, int* returnSize) {
    if (digits[n - 1] == 9) 
    {
        int i = n - 1;
        while (i >= 0 && digits[i] == 9) {
            digits[i] = 0;
            i--;
        }
        if (i < 0) {
            *returnSize = n + 1; 
            int *arr = malloc(*returnSize * sizeof(int));
            arr[0] = 1; 
            for (int j = 1; j < *returnSize; j++) {
                arr[j] = 0; 
            }
            return arr;
        } 
        
        else {
            digits[i] = digits[i] + 1;
            *returnSize = n;
            int *arr = malloc(*returnSize * sizeof(int));
            for (int j = 0; j < n; j++) {
                arr[j] = digits[j];
            }
            return arr;
        }
    }
    else{
        *returnSize = n;
        int *arr = malloc (*returnSize * sizeof(int));
        for (int i = 0; i < n-1; i++)
        {
            arr[i] = digits[i];
        }
        arr[n-1]  = digits[n - 1]  + 1;
        return arr;
    }
    
}