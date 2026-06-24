

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberOfLines(int* widths, int widthsSize, char * s, int* returnSize){
    int line = 0;
    *returnSize = 2;
    int *arr = malloc(*returnSize * sizeof(int));
    int size = 0;
    for(int i = 0; s[i] != '\0' ; i++){    
        if(size + widths[s[i] - 'a'] <= 100){
            size += widths[s[i] - 'a'];
        }
        else{
            size = widths[s[i] - 'a'];
            line++;
        }
    }
    arr[0] = line + 1;
    arr[1] = size;
    return arr;
}